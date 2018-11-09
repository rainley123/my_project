#ifndef ENEMYTANK_H
#define ENEMYTANK_H
#include "tank.h"

class enemytank : tank
{
public:
    /**
     * @brief enemytank
     */
    enemytank();

    /**
     * @brief enemytank
     * @param x
     * @param y
     * @param height
     * @param width
     * @param hit
     */
    enemytank(int x, int y, int height = 100, int width = 100, bool hit = false);

    /**
     * @brief enemytank
     * @param tk
     */
    enemytank(const tank &tk);

    /**
     * @brief enemytank
     * @param tk
     */
    enemytank(const enemytank &tk);

    /**
     * @brief operator =
     * @param tk
     * @return enemytank
     */
    enemytank &operator =(const enemytank &tk);

    /**
     * @brief paint
     * @param painter
     */
    virtual void paint(QPainter *painter);

    /**
     * @brief generateRandNum
     * @return int
     */
    int generateRandNum();

private:
    string m_image;
    QPixmap m_pix;
    string m_type[3] = {"enemy1", "enemy2", "enemy3"};
};

#endif // ENEMYTANK_H
