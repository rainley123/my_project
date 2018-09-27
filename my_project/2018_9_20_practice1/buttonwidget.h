#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QDialog>

namespace Ui {
class buttonwidget;
}

class buttonwidget : public QDialog
{
    Q_OBJECT

public:
    explicit buttonwidget(QWidget *parent = 0);

    ~buttonwidget();

    void initialize();

public slots:
    void startGame();

    void quitGame();

signals:
    void startSignal();

    void quitSignal();

private:
    Ui::buttonwidget *ui;
};

#endif // BUTTONWIDGET_H
