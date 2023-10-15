
#ifndef BINARY_H
#define BINARY_H


#include <QObject>
#include <QWidget>


class Binary : public QWidget
{
    Q_OBJECT
public:
    explicit Binary(QWidget *parent = nullptr);
    void setUpGUI();

private slots:

private:
    Binary binaryWindow();

signals:

};

#endif // BINARY_H
