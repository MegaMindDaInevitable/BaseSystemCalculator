#include "binary.h"
#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QWidget>
#include <QLayout>
#include <QString>

Binary::Binary(MainWindow* mainWindowPtr, QWidget *parent)
    : QWidget(parent), mainWindow(mainWindowPtr)
{
    binaryGUI();
    //connect()

}

void Binary::funcForButton()
{
    backButton = new QPushButton(" Back ",this);
    backButton->setGeometry(QRect(QPoint(1,1),QSize(45,30)));
    backButton->setStyleSheet("QPushButton {"
                               "   background-color: #333333;"  // Dark gray
                               "   color: white;"
                               "   border-radius: 11px;"        // Rounded corners
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

void Binary::binaryGUI()
{
    //creating input box
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



    //printing out the answer
    resultsLabel = new QLabel("Answer",this);
    resultsLabel->setGeometry(QRect(QPoint(50, 75),QSize(200, 50)));
   // resultsLabel->setText(contain);

    funcForButton();
    //creating buttons
    QString otherSystem[] = {"Octal","Decimal","Hexadecimal"};
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
                                   "}"
                                   );

        if(i == 0){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toOctal()));
        }else if(i == 1){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toDecimal()));
        }else if(i == 2){
            connect(moreButtons[i], SIGNAL(clicked()), this, SLOT(toHexadecimal()));
        }
    }
}
//function to go back to mainwindow
void Binary::functionToMain()
{
    mainWindow->show();
    this->close();
}

void Binary::toDecimal() {
    //validating input
    QString binaryNumber = userInput->text();
   // QString contain;

    //checking if the input accepts only 1 and 0
    for(int i = 0; i < binaryNumber.size(); i++)
    {
        //if(binaryNumber[i] != '1' && binaryNumber[i] != '0')
       // {
            QChar characterInTheInput = binaryNumber.at(i);
            if(characterInTheInput != '0' && characterInTheInput != '1')
            {
                resultsLabel->setText("Invalid binary: " /*+ characterInTheInput*/);

                return;
            }
       // }
    }

    bool ok;

    int decimal = binaryNumber.toInt(&ok, 2);
    resultsLabel->setText(ok ? QString::number(decimal): "Invalid input");
}
void Binary::toHexadecimal() {}
void Binary::toOctal() {}
