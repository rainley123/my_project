#include "buttonwidget.h"
#include "ui_buttonwidget.h"
#include <QDebug>

buttonwidget::buttonwidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buttonwidget)
{
    ui->setupUi(this);

    //place the buttonwidget into mainwidget
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    //button clicked event
    initialize();

}

buttonwidget::~buttonwidget()
{
    delete ui;
}

void buttonwidget::initialize()
{
    connect(ui->startbutton, &QPushButton::clicked, this, &buttonwidget::startGame);
    connect(ui->quitbutton, &QPushButton::clicked, this, &buttonwidget::quitGame);
}

void buttonwidget::startGame()
{
    this->close();
    emit startSignal();
}

void buttonwidget::quitGame()
{
    this->close();
    emit quitSignal();
}
