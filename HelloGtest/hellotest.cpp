#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <QSignalSpy>
#include <QTest>
#include "counter.h"

using namespace testing;
using namespace Counter;

class HelloTest : public ::testing::Test {
protected:
    virtual void SetUp()
    {
    // Do nothing
    }

    virtual void TearDown()
    {

    }

    QTimer *timer_;
};

TEST_F(HelloTest, startCounter)
{
    timer_ = new QTimer();
    timer_->setSingleShot(1);
    Counter::Counter *counter = new Counter::Counter(timer_);

    QSignalSpy spy(timer_, SIGNAL(timeout()));
    timer_->start();
    QCOMPARE(spy.count(), 1);
}
