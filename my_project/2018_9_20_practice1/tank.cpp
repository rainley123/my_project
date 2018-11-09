#include "tank.h"

tank::tank():
    m_x(0),
    m_y(0),
    m_height(0),
    m_width(0),
    m_hit(false)
{}

tank::tank(int x, int y, int height, int width, bool hit):
    m_x(x),
    m_y(y),
    m_height(height),
    m_width(width),
    m_hit(hit)
{}

tank::tank(const tank &tk):
    m_x(tk.m_x),
    m_y(tk.m_y),
    m_height(tk.m_height),
    m_width(tk.m_width),
    m_hit(tk.m_hit)
{}

tank &tank::operator =(const tank &tk)
{
    if (this == &tk)
        return *this;
    m_x = tk.m_x;
    m_y = tk.m_y;
    m_height = tk.m_height;
    m_width = tk.m_width;
    m_hit = tk.m_hit;
    return *this;
}

tank::~tank()
{}

void tank::move(int x_step, int y_step)
{
    m_x = m_x + x_step;
    m_y = m_y + y_step;
}
