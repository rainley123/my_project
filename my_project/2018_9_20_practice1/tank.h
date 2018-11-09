#ifndef TANK_H
#define TANK_H
#include <QPainter>

#define PATH "/home/ley/my_project/my_project/tankgame_image/"

using namespace std;

class tank
{
public:
    enum DIRECTION {U, D, L, R};

    /**
     * @brief tank
     */
    tank();

    /**
     * @brief tank
     * @param x
     * @param y
     * @param height
     * @param width
     * @param hit
     */
    tank(int x, int y, int height = 100, int width = 100,
         bool hit = false);

    /**
     * @brief tank(copy construction)
     * @param tk
     */
    tank(const tank &tk);

    /**
     * @brief operator =
     * @param tk
     * @return tank
     */
    tank &operator =(const tank &tk);

    /**
     * @brief ~tank
     */
    virtual ~tank();

    /**
     * @brief move
     * @param x_step
     * @param y_step
     */
    void move(int x_step, int y_step);

    /**
     * @brief paint
     * @param painter
     */
    virtual void paint(QPainter *painter) = 0;

    /**
     * @brief getTankPosX
     * @return
     */
    int getTankPosX() const
    {
        return m_x;
    }

    /**
     * @brief getTankPosY
     * @return
     */
    int getTankPosY() const
    {
        return m_y;
    }

    /**
     * @brief getTankWidth
     * @return
     */
    int getTankWidth() const
    {
        return m_width;
    }

    /**
     * @brief getTankHeight
     * @return
     */
    int getTankHeight()
    {
        return m_height;
    }

private:
    int m_x, m_y;
    int m_height, m_width;
    bool m_hit;
    DIRECTION m_direction;
};

#endif // TANK_H
