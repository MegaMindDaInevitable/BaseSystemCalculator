
#include "binary.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>

Binary::Binary(QWidget *parent)
    : QWidget{parent}
{
    setUpGUI();
}

void Binary::setUpGUI()
{
    QPushButton *btn = new QPushButton("Binaryyyyyy");

    QHBoxLayout * layout = new QHBoxLayout(this);
    layout->addWidget(btn);
}
