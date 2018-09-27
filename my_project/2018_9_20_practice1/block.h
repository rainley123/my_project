#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>

using namespace std;

class Block
{
public:
    Block();

    Block(int x, int y, int height, int width, const string &image, bool hit = false);

    ~Block();

    void paint(QPainter *painter);

private:
    int m_x;
    int m_y;
    int m_height;
    int m_width;
    string m_type;
    bool m_hit;
    QPixmap m_pix;
};

#endif // BLOCK_H
