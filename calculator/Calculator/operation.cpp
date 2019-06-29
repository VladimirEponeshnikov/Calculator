#include "calculator.h"
#include "ui_calculator.h"
void Calculator::operation()
{
    QPushButton *b =  (QPushButton *)sender();
    first=ui->results->text().toDouble();
    ui->results->setText("");
    b->setChecked(true);

}

