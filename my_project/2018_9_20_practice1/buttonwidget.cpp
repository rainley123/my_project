#include "buttonwidget.h"
#include "ui_buttonwidget.h"
#include <QDebug>

buttonwidget::buttonwidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buttonwidget)
{
    ui->setupUi(this);

    m_start = false;

    //place the buttonwidget into mainwidget
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    //button clicked event and widget initialize
    initialize();

}

buttonwidget::~buttonwidget()
{
    delete ui;
}

void buttonwidget::initialize()
{
    //set the size and position
    setGeometry(1100, 700, 200, 200);
    connect(ui->startbutton, &QPushButton::clicked, this, &buttonwidget::startGame);
    connect(ui->quitbutton, &QPushButton::clicked, this, &buttonwidget::quitGame);
}

void buttonwidget::startGame()
{
    m_start = true;
    this->close();
    emit startSignal();
}

void buttonwidget::quitGame()
{
    this->close();
    emit quitSignal();
}
