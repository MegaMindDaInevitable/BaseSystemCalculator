#include "decimal.h"
#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QHBoxLayout>

Decimal::Decimal(MainWindow* mainWindowPtr, QWidget *parent)
    : QWidget(parent), mainWindow(mainWindowPtr)
{
    decimalGui();
}

void Decimal::decimalGui()
{
    userInput = new QLineEdit(this);
    userInput->setPlaceholderText("Enter your number here..");
    userInput->setGeometry(QRect(QPoint(50, 5), QSize(200, 50)));

    QLabel *outPutLabel = new QLabel("Answer", this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));

    functionBtn();

    QString otherSystem[] = {"Binary", "Octal", "Hexadecimal"};
    for(int i = 0; i <= 2; i++)
    {
        moreButtons[i] = new QPushButton(otherSystem[i], this);
        moreButtons[i]->setGeometry((QRect(QPoint(50, 150 + 50 * i), QSize(200, 50))));
        moreButtons[i]->setStyleSheet("QPushButton {"
                                      "   background-color: #333333;"  // Dark gray
                                      "   color: white;"
                                      "   border-radius: 15px;"        // Rounded corners
                                      "   padding: 8px;"
                                      "   border: 1px solid #555555;"  // Subtle border
                                      "   font-weight: bold;"
                                      "}"
                                      "QPushButton:hover {"
                                      "   background-color: #444444;"  // Lighter on hover
                                      "   border: 1px solid #777777;"
                                      "}"
                                      "QPushButton:pressed {"
                                      "   background-color: #222222;"  // Darker when pressed
                                      "}");

        if(i == 0){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toBinary()));
        }else if(i == 1){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toOctal()));
        }else if(i == 2){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toHexadecimal()));
        }
    }
}

void Decimal::functionBtn()
{
    backButton = new QPushButton("Back",this);
    backButton->setGeometry(QRect(QPoint(1,1),QSize(40,25)));
    backButton->setStyleSheet("QPushButton {"
                               "   background-color: #333333;"  // Dark gray
                               "   color: white;"
                               "   border-radius: 15px;"        // Rounded corners
                               "   padding: 8px;"
                               "   border: 1px solid #555555;"  // Subtle border
                               "   font-weight: bold;"
                               "}"
                               "QPushButton:hover {"
                               "   background-color: #444444;"  // Lighter on hover
                               "   border: 1px solid #777777;"
                               "}"
                               "QPushButton:pressed {"
                               "   background-color: #222222;"  // Darker when pressed
                               "}");
    connect(backButton, SIGNAL(clicked(bool)),this, SLOT(functionToMain()));
}

void Decimal::functionToMain()
{
    mainWindow->show();
    this->close();
}

void Decimal::toBinary() {}
void Decimal::toOctal() {}
void Decimal::toHexadecimal() {}
