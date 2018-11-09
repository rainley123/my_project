#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include "buttonwidget.h"
#include "block.h"
#include "gamewidget.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow
     * @param parent
     */
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    /**
     * @brief startPage
     */
    void startPage();

    /**
     * @brief setBackground
     * @param image
     */
    void setBackground(const string &image);

    /**
     * @brief connectSignal
     */
    void connectSignal();

public slots:
    /**
     * @brief startGame
     */
    void startGame();

    /**
     * @brief quitGame
     */
    void quitGame();

private:
    Ui::MainWindow *ui;
    string m_background;
    buttonwidget *m_buttonwidget;
    gamewidget *m_gamewidget;
};

#endif // MAINWINDOW_H
