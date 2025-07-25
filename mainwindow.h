
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include "hexadecimal.h"
#include "binary.h"
#include "decimal.h"
#include "octal.h"

//#include "binary.h"


class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setupUI();
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
    static constexpr int ButtonCount = 4;
    QPushButton *buttons[ButtonCount] = {nullptr};
    Binary *binaryWindow{nullptr};
    Octal *octalWindow{nullptr};
    Decimal *decimalWindow{nullptr};
    Hexadecimal *hexadecimalWindow{nullptr};

};

#endif // MAINWINDOW_H
