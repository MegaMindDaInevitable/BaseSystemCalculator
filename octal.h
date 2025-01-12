
#ifndef OCTAL_H
#define OCTAL_H


#include <QObject>
#include <QWidget>


class Octal : public QWidget
{
    Q_OBJECT
public:
    explicit Octal(QWidget *parent = nullptr);
    void octalGUI();

private slots:


signals:


private:
   // Octal octalWindow();

};

#endif // OCTAL_H
