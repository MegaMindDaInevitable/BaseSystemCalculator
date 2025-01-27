
#ifndef DECIMAL_H
#define DECIMAL_H

#include <QObject>
#include <QWidget>
#include <QPushButton>


class Decimal : public QWidget
{
    Q_OBJECT
public:
    explicit Decimal(QWidget *parent = nullptr);
    void decimalGui();
    void functionBtn();

signals:

private slots:
    void functionToMain();

private:
    QPushButton *backButton;


};

#endif // DECIMAL_H
