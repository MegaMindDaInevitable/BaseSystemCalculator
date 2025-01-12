
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

    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    QPushButton *button = new QPushButton("Hexadecimal");
    button->setStyleSheet("border: 1px solid black; border-radius: 10px;");


    QHBoxLayout * layout4 = new QHBoxLayout(this);
    layout4->addWidget(button);

}

