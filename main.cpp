#include "widget.h"

#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Simple Click Counter");

    int count = 0;

    QVBoxLayout *layout = new QVBoxLayout(&w);
    QPushButton *button = new QPushButton("Click here");
    QLabel *label = new QLabel;

    label->setNum(count);

    layout->addWidget(button);
    layout->addWidget(label);


    w.show();
    return a.exec();
}
