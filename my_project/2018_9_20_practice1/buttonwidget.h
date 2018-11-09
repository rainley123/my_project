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
    /**
     * @brief buttonwidget
     * @param parent
     */
    explicit buttonwidget(QWidget *parent = 0);

    ~buttonwidget();

    /**
     * @brief initialize
     */
    void initialize();

public slots:
    /**
     * @brief startGame
     */
    void startGame();

    /**
     * @brief quitGame
     */
    void quitGame();

    /**
     * @brief getPaintBlock
     * @return m_start
     */
    bool getPaintBlock()
    {
        return m_start;
    }

signals:
    /**
     * @brief startSignal
     */
    void startSignal();

    /**
     * @brief quitSignal
     */
    void quitSignal();

private:
    Ui::buttonwidget *ui;
    bool m_start;
};

#endif // BUTTONWIDGET_H
