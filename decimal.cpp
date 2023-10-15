
#include "decimal.h"
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

    setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
    QPushButton *buttn = new QPushButton("Decimalllllll");
    buttn->setStyleSheet("border: 1px solid black; border-radius: 10px;");

    QHBoxLayout * layout3 = new QHBoxLayout(this);
    layout3->addWidget(buttn);

}

