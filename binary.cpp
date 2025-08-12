#include "binary.h"
#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QWidget>
#include <QLayout>

Binary::Binary(MainWindow* mainWindowPtr, QWidget *parent)
    : QWidget(parent), mainWindow(mainWindowPtr)
{
    binaryGUI();
}

void Binary::funcForButton()
{
    backButton = new QPushButton("Back",this);
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));
}

void Binary::binaryGUI()
{
    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here...");
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));

    QString binaryNumber = userInput->text();
    QString contain;

    for(int i = 0; i < binaryNumber.size(); i++)
    {
        if(binaryNumber[i] != '1' && binaryNumber[i] != '0')
        {
            contain += binaryNumber[i];
        }
    }

    QLabel *resultsLbl = new QLabel("Answer",this);
    resultsLbl->setGeometry(QRect(QPoint(50, 75),QSize(200, 50)));
    resultsLbl->setText(contain);

    funcForButton();
    QString otherSystem[] = {"Octal","Decimal","Hexadecimal"};
    for(int i = 0; i <= 2; i++)
    {
        moreButtons[i] = new QPushButton(otherSystem[i], this);
        moreButtons[i]->setGeometry((QRect(QPoint(50, 150 + 50 * i), QSize(200, 50))));

        if(i == 0){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toOctal()));
        }else if(i == 1){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toDecimal()));
        }else if(i == 2){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toHexadecimal()));
        }
    }
}

void Binary::functionToMain()
{
    mainWindow->show();
    this->close();
}

void Binary::toDecimal() {}
void Binary::toHexadecimal() {}
void Binary::toOctal() {}
