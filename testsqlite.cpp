#include "testsqlite.h"
#include "ui_testsqlite.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>



TestSqlite::TestSqlite(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestSqlite)
{
    ui->setupUi(this);
}

TestSqlite::~TestSqlite()
{
    delete ui;
}

void TestSqlite::on_pushButton_clicked()
{
        QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");

        //关联数据库,test.db是一个文件可以在执行文件路径下找到,也可以指定路径
        database.setDatabaseName("test.db");

        if(database.open())
        {
            qDebug()<<"Database Opened";

            QSqlQuery query(database);

            //建表
          //  QString create_sql = "create table student (id int, name varchar(30), address varchar(30))"; //创建数据表

            //插入数据
            QString insert_sql1 = "insert into student(id,name,address) values(1,001,'sg001')";
            QString insert_sql2 = "insert into student(id,name,address) values(2,002,'sg002')";
            QString insert_sql3 = "insert into student(id,name,address) values(3,003,'sg003')";

            if(!query.exec(insert_sql2)){
                 qDebug()<<query.lastError();
            }

            //更新数据
            QString updateSQL1 = "update student set address='sg004' where id=1";

            if(!query.exec(updateSQL1)){
                 qDebug()<<query.lastError();
            }

            //删除数据
            QString deleteSQl1 = "delete from student where id=3 ";
            if(!query.exec(deleteSQl1)){
                 qDebug()<<query.lastError();
            }

            //查询所有记录
            QString selectSQL1 = "select id ,name, address from student ";

            if(!query.exec(selectSQL1))
            {
                   qDebug()<<query.lastError();
            }
            else
            {
                    while(query.next())
                    {
                        int id = query.value(0).toInt();
                        QString name = query.value(1).toString();
                        QString address = query.value(2).toString();
                        qDebug()<<QString("ID:%1  Name:%2  Address:%3").arg(id).arg(name).arg(address);
                    }
            }
         }

        database.close();
       // QFile::remove("CashSystem.db");

}



















