
#include "mainwindow.h"
#include "hexadecimal.h"
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
    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    QPushButton *button = new QPushButton("Hexadecimal");
    button->setStyleSheet("border: 1px solid black; border-radius: 10px;");


    QHBoxLayout * layout4 = new QHBoxLayout(this);
    layout4->addWidget(button);

}

void Hexadecimal::funForButton()
{

    backButton = new QPushButton("Back",this);
    backButton->setStyleSheet("border: 1px solid black; border-radius; 10px;");
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

