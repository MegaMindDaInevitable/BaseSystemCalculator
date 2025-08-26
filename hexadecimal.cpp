
#include "hexadecimal.h"
#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>

Hexadecimal::Hexadecimal(MainWindow* mainWindowPtr, QWidget *parent)
    : QWidget{parent}, mainWindow(mainWindowPtr)
{
    hexadecimalGUI();
}

void Hexadecimal::hexadecimalGUI()
{
    funForButton();
    userInput = new QLineEdit (this);
    userInput->setPlaceholderText("Enter your number here..."); 
    userInput->setGeometry(QRect(QPoint(50, 5),QSize(200,50)));
    userInput->setStyleSheet("QLineEdit {"
                             "   border-radius: 11px;"        // Rounded corners
                             "   padding: 8px;"
                             "   border: 1px solid #555555;"  // Subtle border
                             "   font-weight: bold;"
                             "}"
                            );

    QLabel *outPutLabel = new QLabel("Answer",this);
    outPutLabel->setGeometry(QRect(QPoint(50,75), QSize(200, 50)));

    QString otherSystem[] = {"Binary","Octal","Decimal"};
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
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toDecimal()));
        }
    }
}

void Hexadecimal::funForButton()
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

void Hexadecimal::functionToMain()
{
    mainWindow->show();
    this->close();
}

void Hexadecimal::toBinary() {}
void Hexadecimal::toOctal() {}
void Hexadecimal::toDecimal() {}
