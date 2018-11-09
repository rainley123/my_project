#ifndef MYTANK_H
#define MYTANK_H
#include "tank.h"
#include <QPixmap>

class mytank : public tank
{
public:
    /**
     * @brief mytank
     */
    mytank();

    /**
     * @brief mytank
     * @param x
     * @param y
     * @param height
     * @param width
     * @param hit
     * @param image
     */
    mytank(int x, int y, int height = 100, int width = 100, bool hit = false,
           string image = "mytank");

    /**
     * @brief mytank
     * @param tk
     * @param image
     */
    mytank(const tank &tk, string image = "mytank");

    /**
     * @brief mytank(copy construction)
     * @param tk
     */
    mytank(const mytank &tk);

    /**
     * @brief operator =
     * @param tk
     * @return
     */
    mytank & operator =(const mytank &tk);

    /**
     * @brief paint
     * @param painter
     */
    virtual void paint(QPainter *painter);

private:
    string m_image;
    QPixmap m_pix;
};

#endif // MYTANK_H
