#include<raylib.h>
#include<vector>

#include<iostream>

class Alien {
    public:
        Alien(Vector2 position) : 
            m_position(position) {
                health = 1;
            }
                
        void update();

        bool isHit();

        Vector2 getPosition() const {return m_position; }

        void shoot();

    private:
        Vector2 m_position;
        int health;
};

class Tank: public Alien {
    public:
        Tank(Vector2 position) : 
            Alien(position) {
                health = 2;
                std::cout << "created Tank with health: " << health << std::endl;
            }

        void update();

    private:
        int health;
        Vector2 m_position;
};

extern std::vector<Alien> aliens;