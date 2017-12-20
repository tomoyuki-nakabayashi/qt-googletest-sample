#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QTimer>

namespace Counter {

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QTimer *timer, QObject *parent = nullptr);
    ~Counter();

private slots:
    void onTimeout();

signals:

public slots:

private:
    QTimer *timer_;
    quint32 counter_;
    qint32 period_;
};

}

#endif // COUNTER_H
