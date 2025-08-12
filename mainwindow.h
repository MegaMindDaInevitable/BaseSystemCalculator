#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include "hexadecimal.h"
#include "binary.h"
#include "decimal.h"
#include "octal.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setupUI();

private slots:
    void octalButtonClicked();
    void binaryButtonClicked();
    void decimalButtonClicked();
    void hexadecimalButtonClicked();

private:
    QLabel *prompt{nullptr};
    static constexpr int ButtonCount = 4;
    QPushButton *buttons[ButtonCount] = {nullptr};
};

#endif // MAINWINDOW_H
