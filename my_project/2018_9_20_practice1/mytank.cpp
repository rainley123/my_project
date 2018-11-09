#include "mytank.h"

mytank::mytank() : tank()
{
    m_image = "";
}

mytank::mytank(int x, int y, int height, int width, bool hit, string image)
    : tank(x, y, height, width, hit)
{
    m_image = image;
    string path = string(PATH) + m_image + string("U");
    m_pix.load(path.c_str());
}

mytank::mytank(const tank &tk, string image) : tank(tk)
{
    m_image = image;
    string path = string(PATH) + m_image + string("U");
    m_pix.load(path.c_str());
}

// Copy construction fuction
mytank::mytank(const mytank &tk) :
    tank(tk),
    m_image(tk.m_image),
    m_pix(tk.m_pix)
{
}

// Operator =
mytank &mytank::operator =(const mytank &tk)
{
    if (this == &tk)
        return *this;

    tank::operator =(tk);
    m_image = tk.m_image;
    m_pix = tk.m_pix;
    return *this;
}

void mytank::paint(QPainter *painter)
{
    int x = getTankPosX();
    int y = getTankPosY();
    int width = getTankWidth();
    int height = getTankHeight();

    painter->drawPixmap(x, y, width, height, m_pix);
}

