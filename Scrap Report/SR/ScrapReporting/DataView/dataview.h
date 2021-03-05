#ifndef DATAVIEW_H
#define DATAVIEW_H
#include "clearprompt.h"

#include <QMainWindow>
#include <QtSql/QSqlTableModel>
#include <QFileSystemWatcher>
#include <QString>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class DataView; }
QT_END_NAMESPACE

class DataView : public QMainWindow
{
    Q_OBJECT

public:
    DataView(QWidget *parent = nullptr);
    ~DataView();

private slots:
    void kanbanUpdate();
    void tableUpdate();
    void on_pushButton_clicked();
    void on_k_Card_returnPressed();
    void on_k_Part_returnPressed();
    void on_k_Qty_returnPressed();
    void on_DeleteRow_clicked();

    void on_dRow_Scrap_clicked();

    void on_clrAll_clicked();

    void on_Export_clicked();

private:
    Ui::DataView *ui;
    QSqlTableModel *model;
    QSqlTableModel *kb_model;
    QFileSystemWatcher *SW;
    int row;
};
#endif // DATAVIEW_H
