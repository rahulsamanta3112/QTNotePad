/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPsate;
    QAction *actionRedo;
    QAction *actionSave_As;
    QAction *actionundo;
    QAction *actionabout;
    QAction *actionFont;
    QAction *actionColor;
    QAction *actionBackground_Color;
    QAction *actionWindow_Color;
    QAction *actionPrint;
    QAction *actionLeft_Allign;
    QAction *actionCenter_Allign;
    QAction *actionRight_Allign;
    QAction *actionNumbering;
    QAction *actionBullets;
    QAction *actionimage;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textE;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(874, 527);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/new icom/nnew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/new icom/nopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/new icom/nsave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/new icom/ncut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/new icom/ncopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPsate = new QAction(MainWindow);
        actionPsate->setObjectName(QStringLiteral("actionPsate"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/new icom/npaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPsate->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/new icom/nredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/new icom/nsaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon7);
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName(QStringLiteral("actionundo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/new icom/nundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionundo->setIcon(icon8);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QStringLiteral("actionabout"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/new icom/nifo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionabout->setIcon(icon9);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/new icom/nfont.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon10);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/new icom/nfontcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon11);
        actionBackground_Color = new QAction(MainWindow);
        actionBackground_Color->setObjectName(QStringLiteral("actionBackground_Color"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/new icom/nbc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground_Color->setIcon(icon12);
        actionWindow_Color = new QAction(MainWindow);
        actionWindow_Color->setObjectName(QStringLiteral("actionWindow_Color"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/new icom/wc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWindow_Color->setIcon(icon13);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/new icom/nprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon14);
        actionPrint->setShortcutContext(Qt::ApplicationShortcut);
        actionPrint->setMenuRole(QAction::TextHeuristicRole);
        actionPrint->setShortcutVisibleInContextMenu(true);
        actionLeft_Allign = new QAction(MainWindow);
        actionLeft_Allign->setObjectName(QStringLiteral("actionLeft_Allign"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/prefix1/new icom/nleftall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft_Allign->setIcon(icon15);
        actionCenter_Allign = new QAction(MainWindow);
        actionCenter_Allign->setObjectName(QStringLiteral("actionCenter_Allign"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/new/prefix1/new icom/nallcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter_Allign->setIcon(icon16);
        actionRight_Allign = new QAction(MainWindow);
        actionRight_Allign->setObjectName(QStringLiteral("actionRight_Allign"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/new/prefix1/new icom/nallrigth.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight_Allign->setIcon(icon17);
        actionNumbering = new QAction(MainWindow);
        actionNumbering->setObjectName(QStringLiteral("actionNumbering"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/new/prefix1/new icom/nbullets.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNumbering->setIcon(icon18);
        actionBullets = new QAction(MainWindow);
        actionBullets->setObjectName(QStringLiteral("actionBullets"));
        actionBullets->setIcon(icon18);
        actionimage = new QAction(MainWindow);
        actionimage->setObjectName(QStringLiteral("actionimage"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/new/prefix1/new icom/nimg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionimage->setIcon(icon19);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textE = new QTextEdit(centralWidget);
        textE->setObjectName(QStringLiteral("textE"));

        horizontalLayout->addWidget(textE);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 874, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QLatin1String("\n"
"\n"
"QToolBar \n"
"{\n"
"	background-color: 	Medium gray;\n"
"	spacing: 3px;\n"
"	padding: 4px;\n"
"   border-style: outset;\n"
"    border-width:5px;\n"
"    border-color: Red;\n"
"  gradient: Gradient {\n"
"                GradientStop { position: 0 ; color: \"#fff\" }\n"
"                GradientStop { position: 1 ; color: \"#eee\" }\n"
"            }\n"
"} \n"
"\n"
""));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPsate);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        mainToolBar->addAction(actionNew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPsate);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionundo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLeft_Allign);
        mainToolBar->addAction(actionCenter_Allign);
        mainToolBar->addAction(actionRight_Allign);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFont);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionColor);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBackground_Color);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionWindow_Color);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionabout);
        mainToolBar->addAction(actionNumbering);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBullets);
        mainToolBar->addAction(actionimage);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "New", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionPsate->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_TOOLTIP
        actionPsate->setToolTip(QApplication::translate("MainWindow", "Paste", nullptr));
#endif // QT_NO_TOOLTIP
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionundo->setText(QApplication::translate("MainWindow", "undo", nullptr));
        actionabout->setText(QApplication::translate("MainWindow", "about", nullptr));
        actionFont->setText(QApplication::translate("MainWindow", "Font", nullptr));
        actionColor->setText(QApplication::translate("MainWindow", "Color", nullptr));
        actionBackground_Color->setText(QApplication::translate("MainWindow", "Background Color", nullptr));
        actionWindow_Color->setText(QApplication::translate("MainWindow", "Window Color", nullptr));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", nullptr));
        actionLeft_Allign->setText(QApplication::translate("MainWindow", "Left Align", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLeft_Allign->setToolTip(QApplication::translate("MainWindow", "Left Align", nullptr));
#endif // QT_NO_TOOLTIP
        actionCenter_Allign->setText(QApplication::translate("MainWindow", "Center Align ", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCenter_Allign->setToolTip(QApplication::translate("MainWindow", "Center Align ", nullptr));
#endif // QT_NO_TOOLTIP
        actionRight_Allign->setText(QApplication::translate("MainWindow", "Right Align", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRight_Allign->setToolTip(QApplication::translate("MainWindow", "Right Align", nullptr));
#endif // QT_NO_TOOLTIP
        actionNumbering->setText(QApplication::translate("MainWindow", "Numbering", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNumbering->setToolTip(QApplication::translate("MainWindow", "Numbering", nullptr));
#endif // QT_NO_TOOLTIP
        actionBullets->setText(QApplication::translate("MainWindow", "Bullets", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBullets->setToolTip(QApplication::translate("MainWindow", "Bullets", nullptr));
#endif // QT_NO_TOOLTIP
        actionimage->setText(QApplication::translate("MainWindow", "image", nullptr));
#ifndef QT_NO_TOOLTIP
        actionimage->setToolTip(QApplication::translate("MainWindow", "image", nullptr));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
