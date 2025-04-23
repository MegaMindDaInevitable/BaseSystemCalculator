
#include "binary.h"
#include "mainwindow.h"
#include "backbutton.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QWidget>
#include <QLayout>

Binary::Binary(QWidget *parent)
    : QWidget{parent}
{

    binaryGUI();
    geometry();
}

void Binary::funcForButton()
{
    backButton = new QPushButton("Back",this);
    backButton->setStyleSheet("border: 1px solid black; border-radius; 10px;");
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));

}

void Binary::binaryGUI()
{

    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    /*QPushButton *btn = new QPushButton("Binaryyyyyy");
    btn->setStyleSheet("border: 1px solid black; border-radius: 10px;");
    QHBoxLayout * layout = new QHBoxLayout(this);
    layout->addWidget(btn);*/
    //QVBoxLayout * layout = new QVBoxLayout(this);

    //inputLine = new QLineEdit("input Line");

    //QLabel *binaryLabel = new QLabel("0", this);
   // binaryLabel->setGeometry(QRect(QPoint(50,10), QSize(200, 50)));
    //binaryLabel->setFixedSize(200,50);
    //binaryLabel->setAlignment(Qt::AlignCenter);
    //layout->addWidget(binaryLabel);

   // QHBoxLayout *layOut = new QHBoxLayout(this);

    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here...");
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));
    userInput->setStyleSheet("border: 1px solid black;border-radius:10px;");



    QLabel *resultsLbl = new QLabel("Answer",this);
    //resultsLbl->setFixedSize(200, 10);
    //resultsLbl->setAlignment(Qt::AlignCenter);
    resultsLbl->setGeometry(QRect(QPoint(50, 75),QSize(200, 50)));
    //layout->addWidget(resultsLbl);
    resultsLbl->setStyleSheet("border: 1px solid black;border-radius:10px;");


    //layout->setSpacing();



    //setLayout(layout);

    funcForButton();
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

        moreButtons[i]->setStyleSheet("border: 1px solid black;border-radius:10px;");

    }
    //geometry();
}

void Binary::functionToMain()
{
    MainWindow *window = new MainWindow();
    window->show();
    window->showMaximized();
    window->setFixedSize(300, 400);
    window->raise();
    window->setFocus();
    this->close();

}
