
#include "octal.h"
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
    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    QPushButton *butn = new QPushButton("Octalllll");
    butn->setStyleSheet("border: 1px solid black; border-radius: 10px;");

    QHBoxLayout * layout2 = new QHBoxLayout(this);
    layout2->addWidget(butn);
}


