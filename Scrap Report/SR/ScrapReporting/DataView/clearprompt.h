#ifndef CLEARPROMPT_H
#define CLEARPROMPT_H

#include <QDialog>

namespace Ui {
class ClearPrompt;
}

class ClearPrompt : public QDialog
{
    Q_OBJECT

public:
    explicit ClearPrompt(QWidget *parent = nullptr);
    ~ClearPrompt();

private slots:
    void on_Export_clicked();
    void on_Clear_clicked();
    void on_Cancel_clicked();

private:
    Ui::ClearPrompt *ui;
};

#endif // CLEARPROMPT_H
