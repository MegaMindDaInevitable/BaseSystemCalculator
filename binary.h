
#ifndef BINARY_H
#define BINARY_H


#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>


class Binary : public QWidget
{
    Q_OBJECT
public:
    explicit Binary(QWidget *parent = nullptr);
    void funcForButton(); //function to creat a button



private slots:


public slots:
    void binaryGUI();
   /* //function to be called when button is pressed for ecimal
    void toDecimal();
    //function to be called when button is pressed for hexadecimal
    void toHexadecimal();
    //function to be called when button is pressed for octal
    void toOctadecimal();*/
    void functionToMain();

private:
    //Binary binaryWindow();
    QPushButton *moreButtons[2];
    QPushButton *backButton;
    QLabel  *labl;

signals:


};

#endif // BINARY_H
