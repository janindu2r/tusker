/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main
{
public:
    QAction *actionNew;
    QAction *actionClose;
    QAction *actionTimer;
    QAction *actionAbout_Tusker;
    QWidget *centralWidget;
    QListView *listView;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main)
    {
        if (Main->objectName().isEmpty())
            Main->setObjectName(QStringLiteral("Main"));
        Main->resize(578, 414);
        actionNew = new QAction(Main);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionClose = new QAction(Main);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionTimer = new QAction(Main);
        actionTimer->setObjectName(QStringLiteral("actionTimer"));
        actionAbout_Tusker = new QAction(Main);
        actionAbout_Tusker->setObjectName(QStringLiteral("actionAbout_Tusker"));
        centralWidget = new QWidget(Main);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 10, 561, 351));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(89, 109, 341, 161));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 159));
        scrollArea->setWidget(scrollAreaWidgetContents);
        listView->raise();
        Main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Main);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 578, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        Main->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Main);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Main->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Main);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Main->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionClose);
        menuTools->addAction(actionTimer);
        menuHelp->addAction(actionAbout_Tusker);

        retranslateUi(Main);

        QMetaObject::connectSlotsByName(Main);
    } // setupUi

    void retranslateUi(QMainWindow *Main)
    {
        Main->setWindowTitle(QApplication::translate("Main", "Main", 0));
        actionNew->setText(QApplication::translate("Main", "New", 0));
        actionClose->setText(QApplication::translate("Main", "Close", 0));
        actionTimer->setText(QApplication::translate("Main", "Timer", 0));
        actionAbout_Tusker->setText(QApplication::translate("Main", "About Tusker", 0));
        menuFile->setTitle(QApplication::translate("Main", "File", 0));
        menuTools->setTitle(QApplication::translate("Main", "Tools", 0));
        menuHelp->setTitle(QApplication::translate("Main", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class Main: public Ui_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
