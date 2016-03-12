#ifndef TEST2_H
#define TEST2_H

#include "AutoTest.h"

class Reader : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void test1();
    void test2();
    void cleanupTestCase();
};

DECLARE_TEST(Reader)

#endif // TEST2_H
