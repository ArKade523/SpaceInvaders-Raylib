#include<raylib.h>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include"../headers/globals.h"
#include"../headers/projectiles.h"
#include"../headers/aliens.h"

#define DEBUG 0

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Invaders");
    SetExitKey(KEY_Q);

    // Textures
    Image characterImage = LoadImage("../resources/character.png");
    Image alienImage = LoadImage("../resources/alien.png");

    ImageResize(&characterImage, CHARACTER_WIDTH, CHARACTER_WIDTH);
    ImageResize(&alienImage, ALIEN_WIDTH, ALIEN_HEIGHT);

    Texture2D characterSprite = LoadTextureFromImage(characterImage);
    Texture2D alienSprite = LoadTextureFromImage(alienImage);

    // resize and use the same image for lives as for the character
    ImageResize(&characterImage, CHARACTER_WIDTH / 2, CHARACTER_HEIGHT / 2);
    Texture2D livesSprite = LoadTextureFromImage(characterImage);

    resetGame();

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        switch(STATE) {
            case(play):
                // Game Updates
                // -------------------------------------------
                UpdateGame();
                // -------------------------------------------
                // Draw
                // ------------------------------------------- 
                BeginDrawing();
                    ClearBackground((Color) { 0, 5, 25, 255 });
                    DrawText(TextFormat("Score: %i", SCORE), 20, 20, 20, (Color) { 120, 120, 130, 255 });
                    if (DEBUG) {
                        DrawText(TextFormat("Num Bullets: %i", playerShots.size()), 20, 40, 20, (Color) { 200, 120, 120, 255 });
                        DrawText(TextFormat("Num Aliens: %i", aliens.size()), 20, 60, 20, (Color) { 120, 200, 120, 255 });
                    }  

                    DrawTexture(characterSprite, CharPosition.x, CharPosition.y, defaultWHITE);

                    // Handle playerShots interactions
                    for (int i = 0; i < playerShots.size(); i++) {
                        Projectile& bullet = playerShots.at(i);
                        if (bullet.getPosition().y > -10) {
                            DrawRectangleV(bullet.getPosition(), (Vector2) {5, 15}, (Color) { 150, 150, 175, 255 });

                            // 'true' means that the shots are coming from a player and should go up the screen
                            bullet.update(true);
                        } else
                            playerShots.erase(playerShots.begin() + i);
                        
                    }

                    for (int i = 0; i < LIVES; i++)
                        DrawTexture(livesSprite, SCREEN_WIDTH - 10 - livesSprite.width - 40 * i, 10, defaultWHITE);

                    for (int i = 0; i < alienShots.size(); i++) {
                        Projectile& bullet = alienShots.at(i);
                        if (bullet.getPosition().y < SCREEN_HEIGHT) {
                            DrawRectangleV(bullet.getPosition(), (Vector2) {5, 15}, (Color) { 150, 150, 175, 255 });
                            // 'false' means that the shots are coming from an alien and should go down the screen
                            bullet.update(false);
                        } else
                            alienShots.erase(alienShots.begin() + i);
                        
                        if (bullet.getPosition().y > SCREEN_HEIGHT - 35 &&
                            bullet.getPosition().x > CharPosition.x &&
                            bullet.getPosition().x < CharPosition.x + CHARACTER_WIDTH) {
                                alienShots.erase(alienShots.begin() + i);
                                LIVES--;
                                DrawRectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, (Color) { 255, 0, 0, 50 });
                            }
                    }

                    // Handle alien interactions
                    for (int i = 0; i < aliens.size(); i++) {
                        Alien& alien = aliens.at(i);
                        alien.update();

                        // make the aliens wiggle across the screen
                        alienOffsetX += alienOffsetDelta.x;
                        if (alienOffsetX > ALIEN_OFFSET_MAX || alienOffsetX < 0)
                            alienOffsetDelta.x = -alienOffsetDelta.x;

                        for (int j = 0; j < playerShots.size(); j++) {
                            Projectile& bullet = playerShots.at(j);
                            if (bullet.getPosition().x > alien.getPosition().x &&
                                bullet.getPosition().x < alien.getPosition().x + ALIEN_WIDTH) {
                                    if (bullet.getPosition().y > alien.getPosition().y &&
                                        bullet.getPosition().y < alien.getPosition().y + ALIEN_HEIGHT) {
                                            aliens.erase(aliens.begin() + i);
                                            playerShots.erase(playerShots.begin() + j);
                                            SCORE += 50;
                                        }
                                }
                        }

                        if (alien.getPosition().y > SCREEN_HEIGHT) {
                            aliens.erase(aliens.begin() + i);
                        }

                        // check all alien interactions first before drawing alien
                        DrawTexture(alienSprite, alien.getPosition().x, alien.getPosition().y, (Color) { 255, 255, 255, 255 });
                    }

                EndDrawing();
                // -------------------------------------------

                break;
            case(menu):
                
                UpdateMenu();

                BeginDrawing();
                    ClearBackground((Color) { 10, 15, 35, 255 });
                    DrawText("Space Invaders", 200, 200, 50, (Color) { 120, 120, 130, 255 });
                    DrawText("Play", 350, 250, 30, (Color) { 120, 120, 130, 255 });
                    DrawRectangle(350, 285, playButtonHover, 5, (Color) { 120, 120, 130, 255 });
                EndDrawing();
                break;
            case(pause):

                UpdatePause();    

                BeginDrawing();
                    ClearBackground((Color) { 10, 15, 35, 255 });

                    // Draw Lives
                    for (int i = 0; i < LIVES; i++)
                        DrawTexture(livesSprite, SCREEN_WIDTH - 10 - livesSprite.width - 40 * i, 10, (Color) { 255, 255, 255, 100 });

                    // Draw Score
                    DrawText(TextFormat("Score: %i", SCORE), 20, 20, 20, (Color) { 120, 120, 130, 100 });
                    
                    // Draw Bullets
                    for (int i = 0; i < alienShots.size(); i++) {
                        Projectile& bullet = alienShots.at(i);
                        DrawRectangleV(bullet.getPosition(), (Vector2) {5, 15}, (Color) { 150, 150, 175, 100 });
                    }

                    for (int i = 0; i < playerShots.size(); i++) {
                        Projectile& bullet = playerShots.at(i);
                        DrawRectangleV(bullet.getPosition(), (Vector2) {5, 15}, (Color) { 150, 150, 175, 100 });
                    }

                    // Draw Aliens
                    for (int i = 0; i < aliens.size(); i++) {
                        Alien& alien = aliens.at(i);
                        DrawTexture(alienSprite, alien.getPosition().x, alien.getPosition().y, (Color) { 255, 255, 255, 100 });
                    }

                    // Draw Player
                    DrawTexture(characterSprite, CharPosition.x, CharPosition.y, (Color) { 255, 255, 255, 100 } );

                    // Pause Menu
                    DrawText("Space Invaders", 200, 200, 50, (Color) { 120, 120, 130, 255 });
                    DrawText("Continue Playing", 275, 250, 30, (Color) { 120, 120, 130, 255 });
                    DrawRectangle(275, 285, playButtonHover, 5, (Color) { 120, 120, 130, 255 });

                EndDrawing();
                break;
            case(gameover):

                UpdateGameOver();

                BeginDrawing();
                    ClearBackground((Color) { 10, 15, 35, 255 });
                    if (won)
                        DrawText("You Won!", 285, 200, 50, (Color) { 120, 120, 130, 255 });
                    else
                        DrawText("You Lost!", 280, 200, 50, (Color) { 120, 120, 130, 255 });
                    DrawText("Play Again", 325, 250, 30, (Color) { 120, 120, 130, 255 });
                    DrawText(TextFormat("Score: %i", SCORE), 325, 100, 30, (Color) { 120, 120, 130, 255 });
                    DrawRectangle(325, 285, playButtonHover, 5, (Color) { 120, 120, 130, 255 });
                EndDrawing();
                break;
        }
        
    }

    // De-Initialization
    // -------------------------------------------
    CloseWindow();
    // -------------------------------------------

    return 0;
}

void UpdateGame() {
    static const float ACCELERATION = 2;
    static const float MAX_VELOCITY = 8;
    static const float DECELERATION = 0.7;
    static const int SHOT_TIMING = 15;

    CharVelocity.x *= DECELERATION;

    if (shootCountdown > 0) shootCountdown--;

    if (abs(CharVelocity.x) < 0.3) CharVelocity.x = 0;

    // Movement w/ <-  -> or A  D
    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D) && abs(CharVelocity.x) < MAX_VELOCITY)
        CharVelocity.x += ACCELERATION;
    if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A) && abs(CharVelocity.x) < MAX_VELOCITY)
        CharVelocity.x -= ACCELERATION;

    // go to pause menu
    if (IsKeyDown(KEY_ESCAPE))
        STATE = pause;

    // Wall Collision
    if (CharPosition.x < 0) CharPosition.x = 0;
    if (CharPosition.x > SCREEN_WIDTH - CHARACTER_WIDTH) CharPosition.x = SCREEN_WIDTH - CHARACTER_WIDTH;
    
    // Use Space to shoot
    if (IsKeyDown(KEY_SPACE) && shootCountdown <= 0) {
        Projectile* playerBullet = new Projectile((Vector2){CharPosition.x + CHARACTER_WIDTH / 2, CharPosition.y});
        playerShots.push_back(*playerBullet);
        shootCountdown = SHOT_TIMING;
        if (SCORE > 0) SCORE--;
    }

    // Regulate the time between alien shots
    if (alienShotCountdown > 0) alienShotCountdown--;
    else {
        if (aliens.size() > 0)
            aliens.at(std::rand() % aliens.size()).shoot();
        alienShotCountdown = std::rand() % 100;
    }

    if (LIVES <= 0) STATE = gameover;
    if (aliens.size() <= 0) {
        won = true;
        STATE = gameover;
    }

    CharPosition.x += CharVelocity.x;
}

void UpdateMenu() {
    if (GetMousePosition().x >= 350 && GetMousePosition().x <= 420 &&
        GetMousePosition().y >= 250 && GetMousePosition().y <= 290) {
            playButtonHover += 5;
            if (playButtonHover >= 65) playButtonHover = 65;
            if (IsMouseButtonDown(0)) STATE = play;
    } else {
        playButtonHover -= 5;
        if (playButtonHover <= 0) playButtonHover = 0;
    }

    if (IsKeyDown(KEY_ENTER) || IsKeyDown(KEY_SPACE)) STATE = play;
        
}

void UpdatePause() {
    if (GetMousePosition().x >= 275 && GetMousePosition().x <= 525 &&
        GetMousePosition().y >= 250 && GetMousePosition().y <= 290) {
            playButtonHover += 10;
            if (playButtonHover >= 250) playButtonHover = 250;
            if (IsMouseButtonDown(0)) STATE = play;
    } else {
        playButtonHover -= 10;
        if (playButtonHover <= 0) playButtonHover = 0;
    }

    if (IsKeyDown(KEY_ENTER) || IsKeyDown(KEY_SPACE)) STATE = play;
        
}

void UpdateGameOver() {
    if (GetMousePosition().x >= 322 && GetMousePosition().x <= 482 &&
        GetMousePosition().y >= 250 && GetMousePosition().y <= 290) {
            playButtonHover += 5;
            if (playButtonHover >= 157) playButtonHover = 157;
            if (IsMouseButtonDown(0)) {
                resetGame();
                STATE = play;
            }
    } else {
        playButtonHover -= 5;
        if (playButtonHover <= 0) playButtonHover = 0;
    }

    if (IsKeyDown(KEY_ENTER) || IsKeyDown(KEY_SPACE)) {
        resetGame();
        STATE = play;
    }
        
}

void resetGame() {
    SCORE = 0;
    LIVES = 3;

    playerShots.clear();
    alienShots.clear();
    aliens.clear();

    // create initial set of aliens
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 3; j++) {
            Alien* newAlien = new Alien((Vector2){ ALIEN_WIDTH / 2 + i * 100, 60 + 40 * j });
            aliens.push_back(*newAlien);
        }
    }
}