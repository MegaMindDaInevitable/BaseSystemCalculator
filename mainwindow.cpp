#include "mainwindow.h"
#include <QWidget>
#include <QGridLayout>
#include "binary.h"
#include "octal.h"
#include "decimal.h"
#include "hexadecimal.h"
#include <QMainWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUI();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupUI()
{
    prompt = new QLabel("Which Base System Do You Want To Use", this);
    prompt->setGeometry(QRect(QPoint(50, 100), QSize(300,50)));

    QString systems[] = {"Binary", "Octal", "Decimal", "Hexadecimal"};
    typedef void(MainWindow::*slotFunction)();

    slotFunction mySlots[] = {
        &MainWindow::binaryButtonClicked,
        &MainWindow::octalButtonClicked,
        &MainWindow::decimalButtonClicked,
        &MainWindow::hexadecimalButtonClicked
    };

    for(int i = 0; i < ButtonCount; i++)
    {
        buttons[i] = new QPushButton(systems[i], this);
        buttons[i]->setGeometry(QRect(QPoint(50, 150 + 50 * i), QSize(200, 50)));
        buttons[i]->setStyleSheet("QPushButton {"
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
        connect(buttons[i], &QPushButton::clicked, this, mySlots[i]);
    }
}

void MainWindow::octalButtonClicked()
{
    hide();
    Octal *octalWindow = new Octal(this);
    octalWindow->setAttribute(Qt::WA_DeleteOnClose);
    octalWindow->setFixedSize(300, 400);
    octalWindow->setWindowTitle("Octal");
    octalWindow->show();
}

void MainWindow::binaryButtonClicked()
{
    hide();
    Binary *binaryWindow = new Binary(this);
    binaryWindow->setAttribute(Qt::WA_DeleteOnClose);
    binaryWindow->setFixedSize(300, 400);
    binaryWindow->setWindowTitle("Binary");
    binaryWindow->show();
}

void MainWindow::decimalButtonClicked()
{
    hide();
    Decimal *decimalWindow = new Decimal(this);
    decimalWindow->setAttribute(Qt::WA_DeleteOnClose);
    decimalWindow->setFixedSize(300, 400);
    decimalWindow->setWindowTitle("Decimal");
    decimalWindow->show();
}

void MainWindow::hexadecimalButtonClicked()
{
    hide();
    Hexadecimal *hexadecimalWindow = new Hexadecimal(this);
    hexadecimalWindow->setAttribute(Qt::WA_DeleteOnClose);
    hexadecimalWindow->setFixedSize(300, 400);
    hexadecimalWindow->setWindowTitle("Hexadecimal");
    hexadecimalWindow->show();
}
