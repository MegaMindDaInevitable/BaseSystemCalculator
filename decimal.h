
#ifndef DECIMAL_H
#define DECIMAL_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>


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
    QLineEdit *userInput;
    QPushButton *moreButtons[3];


};

#endif // DECIMAL_H
