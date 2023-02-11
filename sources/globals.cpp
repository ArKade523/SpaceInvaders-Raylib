#include<raylib.h>
#include<vector>
#include<../headers/aliens.h>
#include<../headers/globals.h>
#include<../headers/projectiles.h>

// Constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 450;
const float CHARACTER_HEIGHT = 25;
const float CHARACTER_WIDTH = 55;
const float ALIEN_HEIGHT = 40 * 0.75;
const float ALIEN_WIDTH = 55 * 0.75;
const Color defaultWHITE = { 255, 255, 255, 255 };

// Game States
int LIVES = 3;
int SCORE = 0;
bool won = true;
states STATE = menu;

int playButtonHover = 0;

Vector2 CharPosition = {(float) SCREEN_WIDTH / 2, (float) SCREEN_HEIGHT - 30};
Vector2 CharVelocity = {0, 0};

// alien globals
int shootCountdown = 30;
int alienShotCountdown = 240;
float alienOffsetX = 0;
Vector2 alienOffsetDelta = { 0.3, .1 };
const float ALIEN_OFFSET_MAX = 300;
