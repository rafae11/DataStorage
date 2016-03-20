#include "replayconfig.h"

QDateTime replayconfig::DateTime() const
{
    return m_DateTime;
}

void replayconfig::setDateTime(const QDateTime &DateTime)
{
    m_DateTime = DateTime;
}
