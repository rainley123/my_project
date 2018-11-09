#include "enemytank.h"

enemytank::enemytank() : tank()
{
    m_image = "";
}

enemytank::enemytank(int x, int y, int height, int width, bool hit) : tank(x, y, height, width, hit)
{
    int num = generateRandNum();
    m_image = m_type[num];
    string path = string(PATH) + m_image + string("D");
    m_pix.load(path.c_str());
}

enemytank::enemytank(const tank &tk) : tank(tk)
{
    int num = generateRandNum();
    m_image = m_type[num];
    string path = string(PATH) + m_image + string("D");
    m_pix.load(path.c_str());
}

enemytank::enemytank(const enemytank &tk):
    tank(tk)
{
    m_image = tk.m_image;
    m_pix = tk.m_pix;
}

enemytank &enemytank::operator =(const enemytank &tk)
{
    if (this == &tk)
        return *this;
    tank::operator =(tk);
    m_image = tk.m_image;
    m_pix = tk.m_pix;
    return *this;
}

void enemytank::paint(QPainter *painter)
{
    int x = getTankPosX();
    int y = getTankPosY();
    int width = getTankWidth();
    int height = getTankHeight();

    painter->drawPixmap(x, y, width, height, m_pix);
}

int enemytank::generateRandNum()
{
    qsrand(10);
    int num = qrand() % 3;
    return num;
}
