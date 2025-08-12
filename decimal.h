#ifndef DECIMAL_H
#define DECIMAL_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class MainWindow;

class Decimal : public QWidget
{
    Q_OBJECT
public:
    explicit Decimal(MainWindow* mainWindow, QWidget *parent = nullptr);
    void decimalGui();
    void functionBtn();

private slots:
    void functionToMain();
    void toBinary();
    void toOctal();
    void toHexadecimal();

private:
    MainWindow* mainWindow;
    QPushButton *backButton;
    QLineEdit *userInput;
    QPushButton *moreButtons[3];
};

#endif // DECIMAL_H
