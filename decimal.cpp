
#include "decimal.h"
#include "mainwindow.h"
#include "binary.h"
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QHBoxLayout>

Decimal::Decimal(QWidget *parent)
    : QWidget{parent}
{

    decimalGui();
}

void Decimal::decimalGui()
{
    //setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
   // QPushButton *backBtn = new QPushButton();
   // setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    //QLabel *enterDecimal
    /*QPushButton *buttn = new QPushButton("Decimalllllll");
    buttn->setStyleSheet("border: 1px solid black; border-radius: 10px;");
    f
    QHBoxLayout * layout3 = new QHBoxLayout(this);
    layout3->addWidget(buttn);*/

    userInput = new QLineEdit(this);
    userInput->setPlaceholderText("Enter your numer here..");
    userInput->setGeometry(QRect(QPoint(50, 5), QSize(200, 50)));
    //userInput->setStyleSheet("border: 1px solid black;border-radius:10px;");
    /*QPushButton *btn = new QPushButton("Binaryyyyyy");
    btn->setStyleSheet("border: 1px solid black; border-radius: 10px;");
    QHBoxLayout * layout = new QHBoxLayout(this);
    layout->addWidget(btn);*/
    QLabel *outPutLabel = new QLabel("Answer", this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));
    //outPutLabel->setStyleSheet("border: 1px solid black;border-radius:10px;");
    //funcForButton();
    functionBtn();

    // QLayout


    QString otherSystem[] = {"Octal","Decimal","Hexadecial"};
    for(int i = 0; i <= 2; i++)
    {  //moreButtons is buttons for different operations in the base system
        moreButtons[i] = new QPushButton(otherSystem[i], this);
        moreButtons[i]->setGeometry((QRect(QPoint(50, 150 + 50 * i), QSize(200, 50))));

        if(i == 0){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toOctadecimal()));
        }else if(i == 1){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toDecimal()));
        }else if(i == 2){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toHexadecimal()));
        }

        //moreButtons[i]->setStyleSheet("border: 1px solid black;border-radius:10px;");

    }
}

void Decimal::functionBtn()
{

    backButton = new QPushButton("Back",this);
    //backButton->setStyleSheet("border: 1px solid black; border-radius; 10px;");
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));
}

void Decimal::functionToMain()
{

    MainWindow *window = new MainWindow();
    window->show();
    window->setFixedSize(300, 400);
    window->raise();
    window->setFocus();
    this->close();
}

