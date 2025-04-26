
#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H


#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>


class Hexadecimal : public QWidget
{
    Q_OBJECT
public:
    explicit Hexadecimal(QWidget *parent = nullptr);
    void hexadecimalGUI();
    void funForButton();

signals:

private slots:
    void functionToMain();

private:
    QPushButton *backButton;
    QLineEdit *userInput;
    QPushButton *moreButtons[2];



};

#endif // HEXADECIMAL_H
