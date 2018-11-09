#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>
#include <QPixmap>
#include <QBrush>
#include <QDebug>
#include <QPainter>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(1300,900);
    startPage();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_buttonwidget;
    delete m_gamewidget;
}

void MainWindow::startPage()
{
    //set background image
    setBackground("background.jpeg");

    m_buttonwidget = new buttonwidget(this);
    m_buttonwidget->show();

    connectSignal();
}

void MainWindow::setBackground(const string &image)
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

void MainWindow::connectSignal()
{
    connect(m_buttonwidget, &buttonwidget::startSignal, this, &MainWindow::startGame);
    connect(m_buttonwidget, &buttonwidget::quitSignal, this, &MainWindow::quitGame);
}

void MainWindow::startGame()
{
    m_buttonwidget->hide();
    m_gamewidget = new gamewidget(this);
    m_gamewidget->show();
}

void MainWindow::quitGame()
{
    this->close();
}

