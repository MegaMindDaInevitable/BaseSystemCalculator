
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

//#include "binary.h"


class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void geomtry();
    //void funtionToMain();
signals:

private slots:
   // void pushBtn();
    //void toNewWindow();
    void octalButtonClicked();
    void binaryButtonClicked();
    void decimalButtonClicked();
    void hexadecimalButtonClicked();
private:
    QLabel *prompt{nullptr};
    static constexpr int ButtonCount = 5;
    QPushButton *buttons[ButtonCount] = {nullptr};



};

#endif // MAINWINDOW_H
