#include <QCoreApplication>
#include "counter.h"

using namespace Counter;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer *timer = new QTimer();
    timer->setInterval(1000);
    timer->start();
    Counter::Counter counter(timer);

    return a.exec();
}

