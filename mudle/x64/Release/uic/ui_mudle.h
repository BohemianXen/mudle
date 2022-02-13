/********************************************************************************
** Form generated from reading UI file 'mudle.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUDLE_H
#define UI_MUDLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mudleClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mudleClass)
    {
        if (mudleClass->objectName().isEmpty())
            mudleClass->setObjectName(QString::fromUtf8("mudleClass"));
        mudleClass->resize(600, 400);
        menuBar = new QMenuBar(mudleClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        mudleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mudleClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mudleClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(mudleClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mudleClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(mudleClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mudleClass->setStatusBar(statusBar);

        retranslateUi(mudleClass);

        QMetaObject::connectSlotsByName(mudleClass);
    } // setupUi

    void retranslateUi(QMainWindow *mudleClass)
    {
        mudleClass->setWindowTitle(QCoreApplication::translate("mudleClass", "mudle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mudleClass: public Ui_mudleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUDLE_H
