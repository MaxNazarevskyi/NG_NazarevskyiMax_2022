#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <cmath>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
public slots:
    void Screen();
    void Plus();
    void Minus();
    void Multiply();
    void Divide();
    void Result();
    void Comma();
private:
    float F_Num;
    float S_Num;
    float Comma_Num;
    char Action;
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
