#ifndef TABLE_H
#define TABLE_H

#include <QMainWindow>
#include <QString>
#include <QFileSystemWatcher>

QT_BEGIN_NAMESPACE
namespace Ui { class Table; }
class QSqlTableModel;
QT_END_NAMESPACE

class Table : public QMainWindow
{
    Q_OBJECT

public:
    Table(QWidget *parent = nullptr);
    ~Table();

private slots:
    void on_PartAddBtn_clicked();
    void tableUpdate();
    void on_cNum_returnPressed();
    void on_pNum_returnPressed();
    void on_sQty_returnPressed();
    void on_gQty_returnPressed();
    void on_cNum_editingFinished();

private:
    Ui::Table *ui;
    QSqlTableModel *model;
    int rows;
    QString num;
    QString qty;
    QString ind;
    QFileSystemWatcher *SW;
};

#endif // TABLE_H
