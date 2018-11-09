#include "blockgroup.h"

blockgroup::blockgroup():
    m_x(0),
    m_y(0)
{
}

blockgroup::blockgroup(int x, int y):
    m_x(x),
    m_y(y)
{
    m_blockgroup[0] = Block(m_x, m_y);
    m_blockgroup[1] = Block(m_x + 50, m_y);
    m_blockgroup[2] = Block(m_x + 50, m_y + 50);
    m_blockgroup[3] = Block(m_x, m_y + 50);
}

blockgroup::~blockgroup()
{
}

void blockgroup::paint(QPainter *painter)
{
    for (int i = 0; i < 4; i++)
    {
        m_blockgroup[i].paint(painter);
    }
}
