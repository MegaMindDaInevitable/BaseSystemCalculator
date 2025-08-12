#ifndef BINARY_H
#define BINARY_H

#include <QObject>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>
#include <QLabel>

class MainWindow;

class Binary : public QWidget
{
    Q_OBJECT
public:
    explicit Binary(MainWindow* mainWindow, QWidget *parent = nullptr);
    void funcForButton();
    void binaryGUI();

private slots:
    void functionToMain();
    void toDecimal();
    void toHexadecimal();
    void toOctal();

private:
    MainWindow* mainWindow;
    QPushButton *moreButtons[3];
    QPushButton *backButton;
    QLineEdit *userInput;
    QString text;
};

#endif // BINARY_H
