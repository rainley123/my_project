#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include "blockgroup.h"
#include "mytank.h"
#include "enemytank.h"
#include <QWidget>
#include <QKeyEvent>
#include <vector>

using namespace std;

namespace Ui {
class gamewidget;
}

class gamewidget : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief gamewidget
     * @param parent
     */
    explicit gamewidget(QWidget *parent = 0);

    ~gamewidget();

    /**
     * @brief setBackground
     * @param image
     */
    void setBackground(const string& image);

    /**
     * @brief initialize
     */
    void initialize();

    /**
     * @brief createMap
     * @param painter
     */
    void createMap(QPainter *painter);

    /**
     * @brief createTank
     * @param painter
     */
    void createTank(QPainter *painter);
    
private:
    Ui::gamewidget *ui;
    string m_background;

    struct Map
    {
        int x;
        int y;
    };

    vector<Map> m_mapvec;
    blockgroup m_blockarray[26];
    mytank m_tank;

protected:
    /**
     * @brief paintEvent
     */
    void paintEvent(QPaintEvent*);

    /**
     * @brief keyPressEvent
     */
    void keyPressEvent(QKeyEvent *event);
};

#endif // GAMEWIDGET_H
