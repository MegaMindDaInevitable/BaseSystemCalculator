
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
    QPushButton *butn = new QPushButton("Octalllll");
    butn->setStyleSheet("border: 1px solid black; border-radius: 10px;");


    QHBoxLayout * layout2 = new QHBoxLayout(this);
    layout2->addWidget(butn);
    buttonBack();
}

void Octal::buttonBack()
{
    backButton = new QPushButton("Back",this);
    backButton->setStyleSheet("border: 1px solid black; border-radius; 10px;");
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));

}

void Octal::functionToMain()
{

    MainWindow *window = new MainWindow();
    window->show();
    window->showMaximized();
    window->setFixedSize(300, 400);
    window->raise();
    window->setFocus();
    this->close();
}


