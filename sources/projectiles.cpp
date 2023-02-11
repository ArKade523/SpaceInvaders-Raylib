#include<raylib.h>
#include"../headers/projectiles.h"

void Projectile::update(bool fromPlayer) {
    if (fromPlayer) m_position.y -= 3;
    else m_position.y += 2;
}

std::vector<Projectile> playerShots;
std::vector<Projectile> alienShots;