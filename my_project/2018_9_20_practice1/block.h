#ifndef BLOCK_H
#define BLOCK_H
#include <QPainter>
#include <QPixmap>

using namespace std;

class Block
{
public:
    /**
     * @brief Block
     */
    Block();

    /**
     * @brief Block
     * @param x
     * @param y
     * @param height
     * @param width
     * @param image
     * @param hit
     */
    Block(int x, int y, int height = 50, int width = 50, const string &image = "wall", bool hit = false);

    /**
     * @brief ~Block
     */
    ~Block();

    /**
     * @brief paint
     * @param painter
     */
    void paint(QPainter *painter);

private:
    int m_x, m_y;
    int m_height, m_width;
    string m_type;
    bool m_hit;
    QPixmap m_pix;
};

#endif // BLOCK_H
