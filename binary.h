
#ifndef BINARY_H
#define BINARY_H


#include <QObject>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>
#include <QLabel>


class Binary : public QWidget
{
    Q_OBJECT
public:
    explicit Binary(QWidget *parent = nullptr);
    void funcForButton(); //function to creat a button
    void binaryGUI();
    int binaryCalculations();


private slots:
    void functionToMain();

public slots:

   /* //function to be called when button is pressed for ecimal
    void toDecimal();
    //function to be called when button is pressed for hexadecimal
    void toHexadecimal();
    //function to be called when button is pressed for octal
    void toOctadecimal();*/


private:
    //Binary binaryWindow();
    QPushButton *moreButtons[2];
    QPushButton *backButton;
    QLabel  *labl;
    QLineEdit *userInput;
    QString text;
    int count = 0;
   // QLineEdit *outputLine;
    //QLabel *resultsLbl;

signals:


};

#endif // BINARY_H
