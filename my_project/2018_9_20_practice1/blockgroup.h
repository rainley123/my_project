#ifndef BLOCKGROUP_H
#define BLOCKGROUP_H

#include "block.h"
#include <QPainter>

class blockgroup
{
public:
    /**
     * @brief blockgroup
     */
    blockgroup();

    /**
     * @brief blockgroup
     * @param x
     * @param y
     */
    blockgroup(int x, int y);

    /**
     * @brief ~blockgroup()
     */
    ~blockgroup();

    /**
     * @brief paint
     * @param painter
     */
    void paint(QPainter *painter);

private:
    int m_x;
    int m_y;
    Block m_blockgroup[4];
};

#endif // BLOCKGROUP_H
