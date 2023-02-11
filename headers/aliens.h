#include<raylib.h>
#include<vector>

class Alien {
    public:
        Alien(Vector2 position) : 
            m_position(position) {}
        
        void update();

        Vector2 getPosition() const {return m_position; }

        void shoot();

    private:
        Vector2 m_position;
};

extern std::vector<Alien> aliens;