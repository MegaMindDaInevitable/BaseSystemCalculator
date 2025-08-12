#ifndef OCTAL_H
#define OCTAL_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class MainWindow;

class Octal : public QWidget
{
    Q_OBJECT
public:
    explicit Octal(MainWindow* mainWindow, QWidget *parent = nullptr);
    void octalGUI();
    void buttonBack();

private slots:
    void functionToMain();
    void toBinary();
    void toDecimal();
    void toHexadecimal();

private:
    MainWindow* mainWindow;
    QPushButton *backButton;
    QLineEdit *userInput;
    QPushButton * moreButtons[3];
};

#endif // OCTAL_H
