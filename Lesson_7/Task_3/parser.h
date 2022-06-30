#ifndef PARSER_H
#define PARSER_H
#include <QDebug>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Parser; }
QT_END_NAMESPACE

class Parser : public QMainWindow
{
    Q_OBJECT

public:
    Parser(QWidget *parent = nullptr);
    ~Parser();
public slots:
    QString CheckStr(QString str);
    void go();
private:
    QString text;
    Ui::Parser *ui;
};
#endif // PARSER_H
