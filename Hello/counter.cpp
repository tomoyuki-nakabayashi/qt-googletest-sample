#include <QDebug>
#include "counter.h"

namespace Counter {

Counter::Counter(QTimer *timer, QObject *parent) : QObject(parent)
{
    counter_ = 0;
    timer_ = timer;
    connect(timer_, SIGNAL(timeout()), this, SLOT(onTimeout()));
}

Counter::~Counter()
{
    delete timer_;
}

void Counter::onTimeout(void)
{
    qDebug() << counter_;
    counter_++;
}

}
