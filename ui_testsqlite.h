/********************************************************************************
** Form generated from reading UI file 'testsqlite.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSQLITE_H
#define UI_TESTSQLITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestSqlite
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestSqlite)
    {
        if (TestSqlite->objectName().isEmpty())
            TestSqlite->setObjectName(QStringLiteral("TestSqlite"));
        TestSqlite->resize(400, 300);
        centralWidget = new QWidget(TestSqlite);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 75, 23));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(140, 40, 256, 192));
        TestSqlite->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestSqlite);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        TestSqlite->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestSqlite);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestSqlite->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestSqlite);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestSqlite->setStatusBar(statusBar);

        retranslateUi(TestSqlite);

        QMetaObject::connectSlotsByName(TestSqlite);
    } // setupUi

    void retranslateUi(QMainWindow *TestSqlite)
    {
        TestSqlite->setWindowTitle(QApplication::translate("TestSqlite", "TestSqlite", 0));
        pushButton->setText(QApplication::translate("TestSqlite", "\346\265\213\350\257\225SQLite", 0));
    } // retranslateUi

};

namespace Ui {
    class TestSqlite: public Ui_TestSqlite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSQLITE_H
