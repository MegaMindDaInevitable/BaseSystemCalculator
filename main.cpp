
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
  /*  QString globalStyle = R"(
    QWidget { background-color: rgba(128, 128, 128, 128); color: white; }
    QPushButton {
        background-color: #444;
        color: white;
        border-radius: 5px;
        padding: 6px;
    }
    QPushButton:hover { background-color: gray; }
    QPushButton:pressed { background-color: darkgray; }
)";*/


   // a.setStyleSheet(globalStyle);
   // w.showMaximized();
    w.setFixedSize(300, 400);
    w.show();
    return a.exec();
}
