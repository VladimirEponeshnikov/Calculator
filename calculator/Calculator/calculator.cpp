#include "calculator.h"
#include "ui_calculator.h"
#include "numbers.cpp"
#include "ac.cpp"
#include "dot.cpp"
#include "operation.cpp"
#include "ravno.cpp"

double first;
int r;
Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(numbers()));
     connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(numbers()));
      connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(numbers()));
       connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(numbers()));
        connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(numbers()));
         connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(numbers()));
          connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(numbers()));
           connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(numbers()));
            connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(numbers()));
             connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(numbers()));
             connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(operation()));
             connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(operation()));
             connect(ui->pushButton_proz,SIGNAL(clicked()),this,SLOT(operation()));
             connect(ui->pushButton_del,SIGNAL(clicked()),this,SLOT(operation()));
        ui->pushButton_plus->setCheckable(true);
         ui->pushButton_minus->setCheckable(true);
          ui->pushButton_proz->setCheckable(true);
           ui->pushButton_del->setCheckable(true);

}

Calculator::~Calculator()
{
    delete ui;
}
void numbers();


void on_pushButton_dot_clicked();

void operation();


void on_pushButton_ravno_clicked();


void on_pushButton_ac_clicked();




