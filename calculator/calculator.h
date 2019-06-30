#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QMainWindow>
extern double first,label;
extern int r;
namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;
private slots:
    void numbers();
    void on_pushButton_dot_clicked();
    void on_pushButton_ravno_clicked();
    void on_pushButton_ac_clicked();
    void operation();
    double lablplus(double first, double second);
    double lablminus(double first, double second);
    double lablumn(double first, double second);
    double labldel(double first, double second);
};

#endif // CALCULATOR_H
