#include "clearprompt.h"
#include "ui_clearprompt.h"


#include <QSqlQuery>

ClearPrompt::ClearPrompt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClearPrompt)
{
    ui->setupUi(this);
}

ClearPrompt::~ClearPrompt()
{
    delete ui;
}

void ClearPrompt::on_Export_clicked()
{
    ClearPrompt::close();
}

void ClearPrompt::on_Clear_clicked()
{
    QSqlQuery query;
    query.exec("DELETE FROM SCRAP");
    ClearPrompt::close();
}

void ClearPrompt::on_Cancel_clicked()
{
    ClearPrompt::close();
}
