#include"../headers/aliens.h"
#include"../headers/globals.h"
#include"../headers/projectiles.h"
#include<vector>

#include<iostream>

void Alien::update() {
    m_position.x += alienOffsetDelta.x;
    m_position.y += alienOffsetDelta.y;
}

void Alien::shoot() {
    Projectile* alienBullet = new Projectile((Vector2){m_position.x + ALIEN_WIDTH / 2, m_position.y + ALIEN_HEIGHT});
    alienShots.push_back(*alienBullet);
}

bool Alien::isHit() {
    std::cout << "Initial Health: " << health << std::endl;
    health -= 1;
    std::cout << health << std::endl;
    return health > 0;
}

void Tank::update() {
    m_position.x -= alienOffsetDelta.x;
    m_position.y += alienOffsetDelta.y;
}

std::vector<Alien> aliens;
