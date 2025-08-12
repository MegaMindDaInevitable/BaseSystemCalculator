#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H

#include <QObject>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

class MainWindow;

class Hexadecimal : public QWidget
{
    Q_OBJECT
public:
    explicit Hexadecimal(MainWindow* mainWindow, QWidget *parent = nullptr);
    void hexadecimalGUI();
    void funForButton();

private slots:
    void functionToMain();
    void toBinary();
    void toOctal();
    void toDecimal();

private:
    MainWindow* mainWindow;
    QPushButton *backButton;
    QLineEdit *userInput;
    QPushButton *moreButtons[3];
};

#endif // HEXADECIMAL_H
