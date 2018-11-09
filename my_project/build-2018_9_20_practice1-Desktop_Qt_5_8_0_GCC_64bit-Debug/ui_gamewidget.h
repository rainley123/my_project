/********************************************************************************
** Form generated from reading UI file 'gamewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIDGET_H
#define UI_GAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewidget
{
public:

    void setupUi(QWidget *gamewidget)
    {
        if (gamewidget->objectName().isEmpty())
            gamewidget->setObjectName(QStringLiteral("gamewidget"));
        gamewidget->resize(400, 300);

        retranslateUi(gamewidget);

        QMetaObject::connectSlotsByName(gamewidget);
    } // setupUi

    void retranslateUi(QWidget *gamewidget)
    {
        gamewidget->setWindowTitle(QApplication::translate("gamewidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gamewidget: public Ui_gamewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIDGET_H
