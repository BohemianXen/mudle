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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mudleClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QGridLayout *guessesGridLayout;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_28;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_29;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_21;
    QPushButton *enterGuessButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mudleClass)
    {
        if (mudleClass->objectName().isEmpty())
            mudleClass->setObjectName(QString::fromUtf8("mudleClass"));
        mudleClass->resize(619, 822);
        centralWidget = new QWidget(mudleClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 613, 751));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(verticalLayoutWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(28);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        guessesGridLayout = new QGridLayout();
        guessesGridLayout->setSpacing(6);
        guessesGridLayout->setObjectName(QString::fromUtf8("guessesGridLayout"));
        guessesGridLayout->setContentsMargins(40, -1, 40, -1);
        lineEdit_19 = new QLineEdit(verticalLayoutWidget);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setMaximumSize(QSize(80, 80));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_19->setFont(font1);
        lineEdit_19->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_19->setFocusPolicy(Qt::StrongFocus);
        lineEdit_19->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_19->setMaxLength(1);
        lineEdit_19->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_19, 3, 3, 1, 1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(80, 80));
        lineEdit_2->setFont(font1);
        lineEdit_2->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_2->setFocusPolicy(Qt::StrongFocus);
        lineEdit_2->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_2->setMaxLength(1);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_28 = new QLineEdit(verticalLayoutWidget);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));
        lineEdit_28->setMaximumSize(QSize(80, 80));
        lineEdit_28->setFont(font1);
        lineEdit_28->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_28->setFocusPolicy(Qt::StrongFocus);
        lineEdit_28->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_28->setMaxLength(1);
        lineEdit_28->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_28, 5, 2, 1, 1);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(80, 80));
        lineEdit_4->setFont(font1);
        lineEdit_4->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_4->setFocusPolicy(Qt::StrongFocus);
        lineEdit_4->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_4->setMaxLength(1);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_4, 0, 3, 1, 1);

        lineEdit_10 = new QLineEdit(verticalLayoutWidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMaximumSize(QSize(80, 80));
        lineEdit_10->setFont(font1);
        lineEdit_10->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_10->setFocusPolicy(Qt::StrongFocus);
        lineEdit_10->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_10->setMaxLength(1);
        lineEdit_10->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_10, 1, 4, 1, 1);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(80, 80));
        lineEdit_7->setFont(font1);
        lineEdit_7->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_7->setFocusPolicy(Qt::StrongFocus);
        lineEdit_7->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_7->setMaxLength(1);
        lineEdit_7->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_7, 1, 1, 1, 1);

        lineEdit_20 = new QLineEdit(verticalLayoutWidget);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setMaximumSize(QSize(80, 80));
        lineEdit_20->setFont(font1);
        lineEdit_20->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_20->setFocusPolicy(Qt::StrongFocus);
        lineEdit_20->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_20->setMaxLength(1);
        lineEdit_20->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_20, 3, 4, 1, 1);

        lineEdit_15 = new QLineEdit(verticalLayoutWidget);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setMaximumSize(QSize(80, 80));
        lineEdit_15->setFont(font1);
        lineEdit_15->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_15->setFocusPolicy(Qt::StrongFocus);
        lineEdit_15->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_15->setMaxLength(1);
        lineEdit_15->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_15, 2, 4, 1, 1);

        lineEdit_17 = new QLineEdit(verticalLayoutWidget);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setMaximumSize(QSize(80, 80));
        lineEdit_17->setFont(font1);
        lineEdit_17->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_17->setFocusPolicy(Qt::StrongFocus);
        lineEdit_17->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_17->setMaxLength(1);
        lineEdit_17->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_17, 3, 1, 1, 1);

        lineEdit_16 = new QLineEdit(verticalLayoutWidget);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setMaximumSize(QSize(80, 80));
        lineEdit_16->setFont(font1);
        lineEdit_16->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_16->setFocusPolicy(Qt::StrongFocus);
        lineEdit_16->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_16->setMaxLength(1);
        lineEdit_16->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_16, 3, 0, 1, 1);

        lineEdit_23 = new QLineEdit(verticalLayoutWidget);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setMaximumSize(QSize(80, 80));
        lineEdit_23->setFont(font1);
        lineEdit_23->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_23->setFocusPolicy(Qt::StrongFocus);
        lineEdit_23->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_23->setMaxLength(1);
        lineEdit_23->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_23, 4, 2, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(80, 80));
        lineEdit->setFont(font1);
        lineEdit->setCursor(QCursor(Qt::BlankCursor));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit->setMaxLength(1);
        lineEdit->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_13 = new QLineEdit(verticalLayoutWidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setMaximumSize(QSize(80, 80));
        lineEdit_13->setFont(font1);
        lineEdit_13->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_13->setFocusPolicy(Qt::StrongFocus);
        lineEdit_13->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_13->setMaxLength(1);
        lineEdit_13->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_13, 2, 2, 1, 1);

        lineEdit_18 = new QLineEdit(verticalLayoutWidget);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setMaximumSize(QSize(80, 80));
        lineEdit_18->setFont(font1);
        lineEdit_18->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_18->setFocusPolicy(Qt::StrongFocus);
        lineEdit_18->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_18->setMaxLength(1);
        lineEdit_18->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_18, 3, 2, 1, 1);

        lineEdit_14 = new QLineEdit(verticalLayoutWidget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setMaximumSize(QSize(80, 80));
        lineEdit_14->setFont(font1);
        lineEdit_14->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_14->setFocusPolicy(Qt::StrongFocus);
        lineEdit_14->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_14->setMaxLength(1);
        lineEdit_14->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_14, 2, 3, 1, 1);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMaximumSize(QSize(80, 80));
        lineEdit_9->setFont(font1);
        lineEdit_9->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_9->setFocusPolicy(Qt::StrongFocus);
        lineEdit_9->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_9->setMaxLength(1);
        lineEdit_9->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_9, 1, 3, 1, 1);

        lineEdit_12 = new QLineEdit(verticalLayoutWidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setMaximumSize(QSize(80, 80));
        lineEdit_12->setFont(font1);
        lineEdit_12->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_12->setFocusPolicy(Qt::StrongFocus);
        lineEdit_12->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_12->setMaxLength(1);
        lineEdit_12->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_12, 2, 1, 1, 1);

        lineEdit_27 = new QLineEdit(verticalLayoutWidget);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));
        lineEdit_27->setMaximumSize(QSize(80, 80));
        lineEdit_27->setFont(font1);
        lineEdit_27->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_27->setFocusPolicy(Qt::StrongFocus);
        lineEdit_27->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_27->setMaxLength(1);
        lineEdit_27->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_27, 5, 1, 1, 1);

        lineEdit_26 = new QLineEdit(verticalLayoutWidget);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));
        lineEdit_26->setMaximumSize(QSize(80, 80));
        lineEdit_26->setFont(font1);
        lineEdit_26->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_26->setFocusPolicy(Qt::StrongFocus);
        lineEdit_26->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_26->setMaxLength(1);
        lineEdit_26->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_26, 5, 0, 1, 1);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(80, 80));
        lineEdit_6->setFont(font1);
        lineEdit_6->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_6->setFocusPolicy(Qt::StrongFocus);
        lineEdit_6->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_6->setMaxLength(1);
        lineEdit_6->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_6, 1, 0, 1, 1);

        lineEdit_22 = new QLineEdit(verticalLayoutWidget);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setMaximumSize(QSize(80, 80));
        lineEdit_22->setFont(font1);
        lineEdit_22->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_22->setFocusPolicy(Qt::StrongFocus);
        lineEdit_22->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_22->setMaxLength(1);
        lineEdit_22->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_22, 4, 1, 1, 1);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMaximumSize(QSize(80, 80));
        lineEdit_8->setFont(font1);
        lineEdit_8->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_8->setFocusPolicy(Qt::StrongFocus);
        lineEdit_8->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_8->setMaxLength(1);
        lineEdit_8->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_8, 1, 2, 1, 1);

        lineEdit_30 = new QLineEdit(verticalLayoutWidget);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));
        lineEdit_30->setMaximumSize(QSize(80, 80));
        lineEdit_30->setFont(font1);
        lineEdit_30->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_30->setFocusPolicy(Qt::StrongFocus);
        lineEdit_30->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_30->setMaxLength(1);
        lineEdit_30->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_30, 5, 4, 1, 1);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(80, 80));
        lineEdit_3->setFont(font1);
        lineEdit_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_3->setFocusPolicy(Qt::StrongFocus);
        lineEdit_3->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_3->setMaxLength(1);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_3, 0, 2, 1, 1);

        lineEdit_25 = new QLineEdit(verticalLayoutWidget);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setMaximumSize(QSize(80, 80));
        lineEdit_25->setFont(font1);
        lineEdit_25->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_25->setFocusPolicy(Qt::StrongFocus);
        lineEdit_25->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_25->setMaxLength(1);
        lineEdit_25->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_25, 4, 4, 1, 1);

        lineEdit_24 = new QLineEdit(verticalLayoutWidget);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setMaximumSize(QSize(80, 80));
        lineEdit_24->setFont(font1);
        lineEdit_24->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_24->setFocusPolicy(Qt::StrongFocus);
        lineEdit_24->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_24->setMaxLength(1);
        lineEdit_24->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_24, 4, 3, 1, 1);

        lineEdit_29 = new QLineEdit(verticalLayoutWidget);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));
        lineEdit_29->setMaximumSize(QSize(80, 80));
        lineEdit_29->setFont(font1);
        lineEdit_29->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_29->setFocusPolicy(Qt::StrongFocus);
        lineEdit_29->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_29->setMaxLength(1);
        lineEdit_29->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_29, 5, 3, 1, 1);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(80, 80));
        lineEdit_5->setFont(font1);
        lineEdit_5->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_5->setFocusPolicy(Qt::StrongFocus);
        lineEdit_5->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_5->setMaxLength(1);
        lineEdit_5->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_5, 0, 4, 1, 1);

        lineEdit_11 = new QLineEdit(verticalLayoutWidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMaximumSize(QSize(80, 80));
        lineEdit_11->setFont(font1);
        lineEdit_11->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_11->setFocusPolicy(Qt::StrongFocus);
        lineEdit_11->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_11->setMaxLength(1);
        lineEdit_11->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_11, 2, 0, 1, 1);

        lineEdit_21 = new QLineEdit(verticalLayoutWidget);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setMaximumSize(QSize(80, 80));
        lineEdit_21->setFont(font1);
        lineEdit_21->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_21->setFocusPolicy(Qt::StrongFocus);
        lineEdit_21->setInputMethodHints(Qt::ImhNoEditMenu|Qt::ImhUppercaseOnly);
        lineEdit_21->setMaxLength(1);
        lineEdit_21->setAlignment(Qt::AlignCenter);

        guessesGridLayout->addWidget(lineEdit_21, 4, 0, 1, 1);


        verticalLayout->addLayout(guessesGridLayout);

        enterGuessButton = new QPushButton(verticalLayoutWidget);
        enterGuessButton->setObjectName(QString::fromUtf8("enterGuessButton"));
        enterGuessButton->setEnabled(false);
        enterGuessButton->setMinimumSize(QSize(100, 40));
        enterGuessButton->setMaximumSize(QSize(93, 16777215));
        QFont font2;
        font2.setPointSize(12);
        enterGuessButton->setFont(font2);
        enterGuessButton->setText(QString::fromUtf8("Enter"));

        verticalLayout->addWidget(enterGuessButton, 0, Qt::AlignHCenter);

        mudleClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mudleClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 26));
        mudleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mudleClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mudleClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mudleClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mudleClass->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, lineEdit_16);
        QWidget::setTabOrder(lineEdit_16, lineEdit_17);
        QWidget::setTabOrder(lineEdit_17, lineEdit_18);
        QWidget::setTabOrder(lineEdit_18, lineEdit_19);
        QWidget::setTabOrder(lineEdit_19, lineEdit_20);
        QWidget::setTabOrder(lineEdit_20, lineEdit_21);
        QWidget::setTabOrder(lineEdit_21, lineEdit_22);
        QWidget::setTabOrder(lineEdit_22, lineEdit_23);
        QWidget::setTabOrder(lineEdit_23, lineEdit_24);
        QWidget::setTabOrder(lineEdit_24, lineEdit_25);
        QWidget::setTabOrder(lineEdit_25, lineEdit_26);
        QWidget::setTabOrder(lineEdit_26, lineEdit_27);
        QWidget::setTabOrder(lineEdit_27, lineEdit_28);
        QWidget::setTabOrder(lineEdit_28, lineEdit_29);
        QWidget::setTabOrder(lineEdit_29, lineEdit_30);

        retranslateUi(mudleClass);

        QMetaObject::connectSlotsByName(mudleClass);
    } // setupUi

    void retranslateUi(QMainWindow *mudleClass)
    {
        mudleClass->setWindowTitle(QCoreApplication::translate("mudleClass", "mudle", nullptr));
        title->setText(QCoreApplication::translate("mudleClass", "MUDLE", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mudleClass: public Ui_mudleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUDLE_H
