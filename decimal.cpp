
#include "decimal.h"
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
   // QPushButton *backBtn = new QPushButton();
    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    //QLabel *enterDecimal
    /*QPushButton *buttn = new QPushButton("Decimalllllll");
    buttn->setStyleSheet("border: 1px solid black; border-radius: 10px;");

    QHBoxLayout * layout3 = new QHBoxLayout(this);
    layout3->addWidget(buttn);*/


   /* setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    /*QPushButton *btn = new QPushButton("Binaryyyyyy");
    btn->setStyleSheet("border: 1px solid black; border-radius: 10px;");
    QHBoxLayout * layout = new QHBoxLayout(this);
    layout->addWidget(btn);*/
     QLabel *binaryLabel = new QLabel("0", this);
    binaryLabel->setGeometry(QRect(QPoint(50,25), QSize(200, 50)));
    //funcForButton();


    // QLayout


   /* QString otherSystem[] = {"Octal","Decimal","Hexadecial"};
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

        moreButtons[i]->setStyleSheet("border: 1px solid black;border-radius:10px;");

    }*/
}

