#ifndef TESTSQLITE_H
#define TESTSQLITE_H

#include <QMainWindow>

namespace Ui {
class TestSqlite;
}

class TestSqlite : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestSqlite(QWidget *parent = 0);
    ~TestSqlite();

private slots:
    void on_pushButton_clicked();


private:
    Ui::TestSqlite *ui;
};

#endif // TESTSQLITE_H
