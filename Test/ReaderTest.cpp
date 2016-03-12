#include "ReaderTest.h"

void Reader::initTestCase()
{
}

void Reader::test1()
{
    QCOMPARE(42, 40 + 2);
}

void Reader::test2()
{
    QCOMPARE("Hello", "World!");
}

void Reader::cleanupTestCase()
{
}
