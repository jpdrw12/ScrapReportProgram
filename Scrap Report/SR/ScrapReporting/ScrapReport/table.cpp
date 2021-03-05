#include "table.h"
#include "ui_table.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTableView>
#include <QFile>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtSql>
#include <QtWidgets>
#include <stdlib.h>
#include <QDebug>




Table::Table(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Table)
{
    ui->setupUi(this);
    ui->dateIn->setDate(QDate::currentDate());

    tableUpdate();


    auto SW = new QFileSystemWatcher{this};
    SW->addPath("ScrapTable.db");
    connect(SW, &QFileSystemWatcher::fileChanged, this, &Table::tableUpdate);
}

Table::~Table()
{
    delete ui;
}

void Table::on_PartAddBtn_clicked()
{
    rows = model->rowCount()+1;
    QSqlQuery query;
    query.prepare("INSERT into SCRAP values(:id, :c, :p, :s, :g, :d, :co)");
    query.bindValue(":c", ui->cNum->text());
    query.bindValue(":p", ui->pNum->text());
    query.bindValue(":s", ui->sQty->text());
    query.bindValue(":g", ui->gQty->text());
    query.bindValue(":d", ui->dateIn->text());
    query.bindValue(":co", ui->comIn->text());
    query.bindValue(":id", rows++);
    query.exec();

    ui->cNum->clear();
    ui->pNum->clear();
    ui->sQty->clear();
    ui->gQty->clear();
    ui->dateIn->setDate(QDate::currentDate());
    ui->comIn->clear();
}

void Table::tableUpdate()
{
    model = new QSqlTableModel(this);
    model->setTable("SCRAP");
    model->select();

    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Card Number"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Part Number"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Scrap Quantity"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Order Quantity"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Comments"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));

    ui->scrapTable->setModel(model);
    ui->scrapTable->sortByColumn(0,Qt::DescendingOrder);
    ui->scrapTable->setColumnHidden(0, "TRUE");
    ui->cNum->setFocus();
   }

void Table::on_cNum_returnPressed()
{
    ui->pNum->setFocus();
}

void Table::on_pNum_returnPressed()
{
    ui->sQty->setFocus();
}

void Table::on_sQty_returnPressed()
{
    ui->gQty->setFocus();
}

void Table::on_gQty_returnPressed()
{
    ui->comIn->setFocus();
}

void Table::on_cNum_editingFinished()
{
    QSqlQuery query;

    query.prepare("SELECT Part, Quantity FROM Kanban WHERE Card = (:Card) ");
    query.bindValue(":Card", ui->cNum->text());
    query.exec();
    while (query.next()) {
        num = query.value(0).toString();
        ui->pNum->setText(num);
        qty = query.value(1).toString();
        ui->gQty->setText(qty);
    }
    query.finish();
}
