
#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H


#include <QObject>
#include <QWidget>


class Hexadecimal : public QWidget
{
    Q_OBJECT
public:
    explicit Hexadecimal(QWidget *parent = nullptr);
    void hexadecimalGUI();

signals:

private slots:

private:


};

#endif // HEXADECIMAL_H
