#include "gamewidget.h"
#include "ui_gamewidget.h"
#include "blockgroup.h"
#include <QDebug>

gamewidget::gamewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewidget)
{
    ui->setupUi(this);  
    m_mapvec = {{1, 1}, {1, 2}, {1, 3}, {3, 1}, {3, 2}, {3, 3},
                {5, 1}, {5, 2}, {5, 3}, {7, 1}, {7, 2}, {7, 3},
                {9, 1}, {9, 2}, {9, 3}, {11, 1}, {11, 2}, {11, 3},
                {1, 6}, {2, 5}, {4, 5}, {5, 6}, {7, 6}, {8, 5},
                {10, 5}, {11, 6}};

    // Place the gamewidget into mainwidget
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    // Make the gamewidget have the foucs
    setFocusPolicy(Qt::StrongFocus);

    hide();
    initialize();
}

gamewidget::~gamewidget()
{
    delete ui;
}

void gamewidget::setBackground(const string &image)
{
    m_background = string("/home/ley/my_project/my_project/tankgame_image/") + image;

    //cover all the background
    setAutoFillBackground(true);

    QPalette pal = this->palette();
    QPixmap pixmap(m_background.c_str());
    QPixmap fit_pixmap = pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    pal.setBrush(backgroundRole(), QBrush(fit_pixmap));
    setPalette(pal);
}

void gamewidget::initialize()
{
    //set the background
    setBackground("graybackground.jpeg");

    //set the size and position
    setGeometry(0, 0, 1300, 900);
}

void gamewidget::createMap(QPainter *painter)
{
    int map_x, map_y;
    for (auto item = m_mapvec.begin(); item != m_mapvec.end(); item++)
    {
        int i = 0;
        map_x = (*item).x * 100;
        map_y = (*item).y * 100;
        m_blockarray[i] = blockgroup(map_x, map_y);
        m_blockarray[i].paint(painter);
        i++;
    }
}

void gamewidget::createTank(QPainter *painter)
{
    if (m_tank.getTankHeight() == 0 && m_tank.getTankWidth() == 0)
    {
        m_tank = mytank(500, 500);
    }
    m_tank.paint(painter);
}

void gamewidget::paintEvent(QPaintEvent *)
{
    //Create the painter
    QPainter *painter = new QPainter(this);

    //Create the map
    createMap(painter);

    //Create the tank
    createTank(painter);
}

void gamewidget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        m_tank.move(0, -20);
        break;
    case Qt::Key_Down:
        m_tank.move(0, 20);
        break;
    case Qt::Key_Left:
        m_tank.move(-20, 0);
        break;
    case Qt::Key_Right:
        m_tank.move(20, 0);
        break;
    default:
        qDebug()<<"Move failed";
        break;
    }
    update();
}
