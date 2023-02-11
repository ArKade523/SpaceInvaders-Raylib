#include<raylib.h>

enum states {
    play,
    menu,
    pause,
    gameover
};

extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;
extern const float CHARACTER_HEIGHT;
extern const float CHARACTER_WIDTH;
extern const float ALIEN_HEIGHT;
extern const float ALIEN_WIDTH;
extern const Color defaultWHITE;

extern int LIVES;
extern int SCORE;
extern bool won;

extern int playButtonHover;

extern Vector2 CharPosition;
extern Vector2 CharVelocity;

// alien globals
extern int shootCountdown;
extern int alienShotCountdown;
extern float alienOffsetX;
extern Vector2 alienOffsetDelta;
extern const float ALIEN_OFFSET_MAX;

extern states STATE;

void UpdateGame();
void UpdateMenu();
void UpdatePause();
void UpdateGameOver();
void resetGame();