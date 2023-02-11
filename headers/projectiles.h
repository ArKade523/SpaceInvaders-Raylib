#include<raylib.h>
#include<vector>

class Projectile {
    public:
        Projectile(Vector2 position) :
            m_position(position) {}

        void update(bool);

        Vector2 getPosition() const { return m_position; }

    private:
        Vector2 m_position;
};

extern std::vector<Projectile> playerShots;
extern std::vector<Projectile> alienShots;