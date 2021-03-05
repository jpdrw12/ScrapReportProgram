#include "dataview.h"
#include "ui_dataview.h"
#include "clearprompt.h"

#include <QTabWidget>
#include <QtSql/QSqlTableModel>
#include <QSqlQuery>
#include <QWidget>
#include <QObject>
#include <QDialog>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

DataView::DataView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DataView)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    tableUpdate();
    kanbanUpdate();

    ui->tabWidget->setCurrentIndex(0);

    auto SW = new QFileSystemWatcher{this};
    SW->addPath("ScrapTable.db");
    connect(SW, &QFileSystemWatcher::fileChanged, this, &DataView::tableUpdate);
}

DataView::~DataView()
{
    delete ui;
}

void DataView::tableUpdate()
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

    ui->ScrapTable_2->setModel(model);
    ui->ScrapTable_2->sortByColumn(0,Qt::DescendingOrder);
    ui->ScrapTable_2->setColumnHidden(0, "TRUE");
   }

void DataView::kanbanUpdate()
{
    kb_model = new QSqlTableModel(this);
    kb_model->setTable("Kanban");
    kb_model->select();

    kb_model->setHeaderData(0, Qt::Horizontal, QObject::tr("Card Number"));
    kb_model->setHeaderData(1, Qt::Horizontal, QObject::tr("Part Number"));
    kb_model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantity"));
    kb_model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID"));

    ui->kanbanTable->setModel(kb_model);
    ui->kanbanTable->sortByColumn(3,Qt::DescendingOrder);
    ui->kanbanTable->setColumnHidden(3, "TRUE");
}

void DataView::on_pushButton_clicked()
{
    int rows = kb_model->rowCount()+1;

    QSqlQuery query;
    query.prepare("INSERT into Kanban values(:c, :p, :q, :id)");
    query.bindValue(":c", ui->k_Card->text());
    query.bindValue(":p", ui->k_Part->text());
    query.bindValue(":q", ui->k_Qty->text());
    query.bindValue(":id", rows++);
    query.exec();
    kanbanUpdate();

    ui->k_Card->clear();
    ui->k_Part->clear();
    ui->k_Qty->clear();

    ui->k_Card->setFocus();
}


void DataView::on_k_Card_returnPressed()
{
    ui->k_Part->setFocus();
}

void DataView::on_k_Part_returnPressed()
{
    ui->k_Qty->setFocus();
}

void DataView::on_k_Qty_returnPressed()
{
    ui->pushButton->setFocus();
}

void DataView::on_DeleteRow_clicked()
{
    QModelIndex ind = ui->kanbanTable->selectionModel()->currentIndex();
    QVariant CardNum = ind.sibling(ind.row(),ind.column()).data();

    QSqlQuery query;
    query.prepare("DELETE FROM Kanban WHERE Card = (:CIn)");
    query.bindValue(":CIn",CardNum);
    query.exec();

    kanbanUpdate();
}

void DataView::on_dRow_Scrap_clicked()
{
    QModelIndex ind = ui->ScrapTable_2->selectionModel()->currentIndex();
    QVariant ID = ind.siblingAtColumn(0).data();
    qDebug() << ID;

    QSqlQuery query;
    query.prepare("DELETE FROM SCRAP WHERE ID = (:CIn)");
    query.bindValue(":CIn", ID);
    query.exec();

    tableUpdate();
}

void DataView::on_clrAll_clicked()
{
    QSqlQuery query;
    query.exec("DELETE from SCRAP");
    qDebug() <<query.exec("DELETE from SCRAP");
}

void DataView::on_Export_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
        tr("Export Scrap Report"), "",
        tr("CSV (Comma delimited) (*.csv);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("unable to open file"),
                file.errorString());
            return;
        }

        QString tableData;
        int rows = model->rowCount();
        int columns = model->columnCount();

        for (int c = 0; c < columns; c++) {
            tableData += model->headerData(c, Qt::Horizontal, Qt::DisplayRole).toString();
            tableData += ",";
         }

        tableData += "\n";

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {

                    tableData += model->data(model->index(i,j)).toString();
                    tableData += ", ";    // for .csv file format
            }
            tableData += "\n";             // (optional: for new line segmentation)
        }

        QTextStream out(&file);
        out << tableData;

    }
}
