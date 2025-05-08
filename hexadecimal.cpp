
#include "mainwindow.h"
#include "hexadecimal.h"
#include "binary.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>

Hexadecimal::Hexadecimal(QWidget *parent)
    : QWidget{parent}
{

    hexadecimalGUI();
}

void Hexadecimal::hexadecimalGUI()
{
    funForButton();
   // setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
   /* QPushButton *button = new QPushButton("Hexadecimal");
    button->setStyleSheet("border: 1px solid black; border-radius: 10px;");


    QHBoxLayout * layout4 = new QHBoxLayout(this);
    layout4->addWidget(button);*/

    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here...");
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));
    //userInput->setStyleSheet("border: 1px solid black;border-radius:10px;");

    QLabel *outPutLabel = new QLabel("Answer",this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));
    //outPutLabel->setStyleSheet("border: 1px solid black;border-radius:10px;");

    QString otherSystem[] = {"Octal","Decimal","Binary"};
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

void Hexadecimal::funForButton()
{

    backButton = new QPushButton("Back",this);
    //backButton->setStyleSheet("border: 1px solid black; border-radius; 10px;");
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));
}

void Hexadecimal::functionToMain()
{
    MainWindow *window = new MainWindow();
    window->show();
    window->showMaximized();
    window->setFixedSize(300, 400);
    window->raise();
    window->setFocus();
    this->close();

}

