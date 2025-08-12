#include "octal.h"
#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>

Octal::Octal(MainWindow* mainWindowPtr, QWidget *parent)
    : QWidget{parent}, mainWindow(mainWindowPtr)
{
    octalGUI();
}

void Octal::octalGUI()
{
    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here...");
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));

    QLabel *outPutLabel = new QLabel("Answer", this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));

    QString otherSystem[] = {"Binary","Decimal","Hexadecimal"};
    for(int i = 0; i <= 2; i++)
    {
        moreButtons[i] = new QPushButton(otherSystem[i], this);
        moreButtons[i]->setGeometry((QRect(QPoint(50, 150 + 50 * i), QSize(200, 50))));

        if(i == 0){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toBinary()));
        }else if(i == 1){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toDecimal()));
        }else if(i == 2){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toHexadecimal()));
        }
    }
    buttonBack();
}

void Octal::buttonBack()
{
    backButton = new QPushButton("Back",this);
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));
}

void Octal::functionToMain()
{
    mainWindow->show();
    this->close();
}

void Octal::toBinary() {}
void Octal::toDecimal() {}
void Octal::toHexadecimal() {}
