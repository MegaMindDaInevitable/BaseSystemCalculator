
#ifndef OCTAL_H
#define OCTAL_H


#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>


class Octal : public QWidget
{
    Q_OBJECT
public:
    explicit Octal(QWidget *parent = nullptr);
    void octalGUI();
    void buttonBack();

private slots:
    void functionToMain();


signals:


private:
   // Octal octalWindow();
    QPushButton *backButton;
    QLineEdit *userInput;
    QPushButton * moreButtons[3];

};

#endif // OCTAL_H
