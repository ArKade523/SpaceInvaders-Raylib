#include"../headers/aliens.h"
#include"../headers/globals.h"
#include"../headers/projectiles.h"
#include<vector>

void Alien::update() {
    m_position.x += alienOffsetDelta.x;
    m_position.y += alienOffsetDelta.y;
}

void Alien::shoot() {
    Projectile* alienBullet = new Projectile((Vector2){m_position.x + ALIEN_WIDTH / 2, m_position.y + ALIEN_HEIGHT});
    alienShots.push_back(*alienBullet);
}

std::vector<Alien> aliens;
