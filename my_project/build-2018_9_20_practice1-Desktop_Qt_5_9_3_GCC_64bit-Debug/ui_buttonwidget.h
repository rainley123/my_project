/********************************************************************************
** Form generated from reading UI file 'buttonwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONWIDGET_H
#define UI_BUTTONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_buttonwidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *startbutton;
    QPushButton *quitbutton;

    void setupUi(QDialog *buttonwidget)
    {
        if (buttonwidget->objectName().isEmpty())
            buttonwidget->setObjectName(QStringLiteral("buttonwidget"));
        buttonwidget->resize(197, 176);
        horizontalLayout = new QHBoxLayout(buttonwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        startbutton = new QPushButton(buttonwidget);
        startbutton->setObjectName(QStringLiteral("startbutton"));

        verticalLayout->addWidget(startbutton);

        quitbutton = new QPushButton(buttonwidget);
        quitbutton->setObjectName(QStringLiteral("quitbutton"));

        verticalLayout->addWidget(quitbutton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(buttonwidget);

        QMetaObject::connectSlotsByName(buttonwidget);
    } // setupUi

    void retranslateUi(QDialog *buttonwidget)
    {
        buttonwidget->setWindowTitle(QApplication::translate("buttonwidget", "Dialog", Q_NULLPTR));
        startbutton->setText(QApplication::translate("buttonwidget", "Start Game", Q_NULLPTR));
        quitbutton->setText(QApplication::translate("buttonwidget", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class buttonwidget: public Ui_buttonwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONWIDGET_H
