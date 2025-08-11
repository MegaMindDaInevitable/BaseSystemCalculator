
#include "octal.h"
#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>

Octal::Octal(QWidget *parent)
    : QWidget{parent}
{
    octalGUI();

}

void Octal::octalGUI()
{
    //Taking input from user
    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here...");
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));
    userInput->setStyleSheet("border: 1px solid black;border-radius:10px;");
    //Label for the output
    QLabel *outPutLabel = new QLabel("Answer", this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));
    outPutLabel->setStyleSheet("border: 1px solid black;border-radius:10px;");


    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
   /* QPushButton *butn = new QPushButton("Octalllll");
    butn->setStyleSheet("border: 1px solid black; border-radius: 10px;");*/
    QString otherSystem[] = {"Binary","Binary","Hexadecial"};
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

       // moreButtons[i]->setStyleSheet("border: 1px solid black;border-radius:10px;");

    }
    //geometry();
    buttonBack();

}


    /*QHBoxLayout * layout2 = new QHBoxLayout(this);
    layout2->addWidget(butn);*/



void Octal::buttonBack()
{
    backButton = new QPushButton("Back",this);
   // backButton->setStyleSheet("border: 1px solid black;border-radius;10px;");
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));

}

void Octal::functionToMain()
{

    MainWindow *window = new MainWindow(nullptr);
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->show();
    //this->hide();
    window->setFixedSize(300, 400);
    window->raise();
    window->setFocus();
    this->close();
}


