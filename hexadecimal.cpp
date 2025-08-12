
#include "hexadecimal.h"
#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>

Hexadecimal::Hexadecimal(MainWindow* mainWindowPtr, QWidget *parent)
    : QWidget{parent}, mainWindow(mainWindowPtr)
{
    hexadecimalGUI();
}

void Hexadecimal::hexadecimalGUI()
{
    funForButton();
    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here...");
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));

    QLabel *outPutLabel = new QLabel("Answer",this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));

    QString otherSystem[] = {"Binary","Octal","Decimal"};
    for(int i = 0; i <= 2; i++)
    {
        moreButtons[i] = new QPushButton(otherSystem[i], this);
        moreButtons[i]->setGeometry((QRect(QPoint(50, 150 + 50 * i), QSize(200, 50))));

        if(i == 0){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toBinary()));
        }else if(i == 1){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toOctal()));
        }else if(i == 2){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toDecimal()));
        }
    }
}

void Hexadecimal::funForButton()
{
    backButton = new QPushButton("Back",this);
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));
}

void Hexadecimal::functionToMain()
{
    mainWindow->show();
    this->close();
}

void Hexadecimal::toBinary() {}
void Hexadecimal::toOctal() {}
void Hexadecimal::toDecimal() {}
