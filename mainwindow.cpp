
#include "mainwindow.h"
#include <QWidget>
#include <QGridLayout>
#include "binary.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    QString titleBarStyle = "QMainWindow::title { background-color: black; }";
    setStyleSheet(titleBarStyle);
   /* for(int i = 0; i <= 3; i++)
    {
        buttons[i]->setGeometry(QRect(QPoint(50, 300), QSize(50,50)));
        buttons[i+1]->setGeometry(QRect(QPoint(100, 300), QSize(50,50)));
        buttons[i+2]->setGeometry(QRect(QPoint(150, 300), QSize(50,50)));
        buttons[i+3]->setGeometry(QRect(QPoint(200, 300), QSize(50,50)));



    }*/
    geomtry();
    //connect()
}

MainWindow::~MainWindow()
{

}
void MainWindow::octalButtonClicked()
{
    
}

void MainWindow::binaryButtonClicked()
{
    //Binary *binaryWindow;
    binaryWindow->show();
}

void MainWindow::decimalButtonClicked()
{
    
}

void MainWindow::hexadecimalButtonClicked()
{
    
}

void MainWindow::geomtry()
{

    //background color of the window
   setStyleSheet("background-color: rgba(128, 128, 128, 128); color: white;");
   prompt = new QLabel("Which Base System Do You Want To Use", this);
   prompt->setGeometry(QRect(QPoint(50, 100), QSize(300,50)));
   prompt->setStyleSheet("background-color: transparent; color: white;");

   //adding prompt buttons
   QString systems[] = {"Binary", "Octal", "Decimal ", "Hexadecimal"};
   for(int i = 0; i <= 3; i++)
   {
       buttons[i] = new QPushButton(systems[i], this);
       buttons[i]->setGeometry((QRect(QPoint(50 , 150 + 50 * i), QSize(200,50))));
       
       if (i == 0) {
           connect(buttons[i], SIGNAL(clicked()), this, SLOT(binaryButtonClicked()));
       } else if (i == 1) {
           connect(buttons[i], SIGNAL(clicked()), this, SLOT(octalButtonClicked()));
       } else if (i == 2) {
           connect(buttons[i], SIGNAL(clicked()), this, SLOT(decimalButtonClicked()));
       } else if (i == 3) {
           connect(buttons[i], SIGNAL(clicked()), this, SLOT(hexadecimalButtonClicked()));
       }
       
       //buttons border color
       buttons[i]->setStyleSheet("border: 1px solid black; border-radius: 10px;");
   }


}



