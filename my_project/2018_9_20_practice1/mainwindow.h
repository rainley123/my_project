#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "buttonwidget.h"
#include <QPaintEvent>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    void startPage();

    void setBackground(const string &image);

    void connectSignal();

    void paintEvent(QPaintEvent*);

public slots:
    void startGame();

    void quitGame();

private:
    Ui::MainWindow *ui;
    string m_background;
    buttonwidget *m_buttonwidget;
};

#endif // MAINWINDOW_H
