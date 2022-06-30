#include "parser.h"
#include "ui_parser.h"

Parser::Parser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Parser)
{
    ui->setupUi(this);
    connect (ui->b_Go, &QPushButton::clicked, this, &Parser::go);
    ui->l_App->setReadOnly(1);
    ui->l_Login->setReadOnly(1);
    ui->l_Password->setReadOnly(1);
}

Parser::~Parser()
{
    delete ui;
}

QString Parser::CheckStr(QString str)
{
    if (str == NULL)
        text = "No Data";
    else
        text = str;
    return text;

}
void Parser::go()
{
    QString text = ui->l_Way->text();
    QStringList text_app = text.split('%');
    for (int i = 0; i < text_app.size(); i++){
        switch (i)
        {
        case 0:
            ui->l_App->setText(CheckStr(text_app.at(i)));
            break;
        case 1:
            ui->l_Login->setText(CheckStr(text_app.at(i)));
            break;
        case 2:
            ui->l_Password->setText(CheckStr(text_app.at(i)));
            break;
        }
    }
}

