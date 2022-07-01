#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    connect(ui->l_Screen, &QLineEdit::textChanged, this, &Calculator::Screen);
    ui->l_Screen->setEnabled(0);
    connect(ui->b_1, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_2, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_3, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_4, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_5, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_6, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_7, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_8, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_9, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_0, &QPushButton::clicked, this, &Calculator::Screen);
    connect(ui->b_Plus, &QPushButton::clicked, this, &Calculator::Plus);
    connect(ui->b_Minus, &QPushButton::clicked, this, &Calculator::Minus);
    connect(ui->b_Multiply, &QPushButton::clicked, this, &Calculator::Multiply);
    connect(ui->b_Divide, &QPushButton::clicked, this, &Calculator::Divide);
    connect(ui->b_Result, &QPushButton::clicked, this, &Calculator::Result);
    connect(ui->b_Comma, &QPushButton::clicked, this, &Calculator::Comma);

}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::Screen()
{
    QPushButton *button = (QPushButton*)sender();
    ui->l_Screen->setText(ui->l_Screen->text()+button->text());
}

void Calculator::Plus()
{
    F_Num = ui->l_Screen->text().toFloat();
    Action = '+';
    ui->l_Screen->clear();
}
void Calculator::Minus()
{
    F_Num = ui->l_Screen->text().toFloat();
    Action = '-';
    ui->l_Screen->clear();
}

void Calculator::Multiply()
{
    F_Num = ui->l_Screen->text().toFloat();
    Action = '*';
    ui->l_Screen->clear();
}

void Calculator::Divide()
{
    F_Num = ui->l_Screen->text().toFloat();
    Action = '/';
    ui->l_Screen->clear();
}

void Calculator::Comma()
{
    ui->l_Screen->setText(ui->l_Screen->text()+'.');
}

void Calculator::Result()
{
    S_Num = ui->l_Screen->text().toFloat();
    switch (Action)
    {
        case '+' :
            ui->l_Screen->setText(QString::number(F_Num + S_Num));
            break;
        case '-' :
            ui->l_Screen->setText(QString::number(F_Num - S_Num));
            break;
        case '*' :
            ui->l_Screen->setText(QString::number(F_Num * S_Num));
            break;
        case '/' :
            ui->l_Screen->setText(QString::number(F_Num / S_Num));
            break;
    }
}

