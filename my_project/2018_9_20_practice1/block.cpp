#include "block.h"
#include <QPixmap>
Block::Block():
    m_x(0),
    m_y(0),
    m_height(0),
    m_width(0),
    m_type(""),
    m_hit(false)
{}

Block::Block(int x, int y, int height, int width, const string &image, bool hit):
    m_x(x),
    m_y(y),
    m_height(height),
    m_width(width),
    m_hit(hit)
{
    m_type = string("/home/fus/my_project/tankgame_image/") + image;
    m_pix.load(m_type.c_str());
}

Block::~Block()
{
}

void Block::paint(QPainter *painter)
{
    painter->drawPixmap(m_x, m_y, m_height, m_width, m_pix);
}
