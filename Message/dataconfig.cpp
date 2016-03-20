#include "dataconfig.h"

QDateTime dataconfig::DateTime() const
{
    return m_DateTime;
}

void dataconfig::setDateTime(const QDateTime &DateTime)
{
    m_DateTime = DateTime;
}

quint64 dataconfig::Relative() const
{
    return m_Relative;
}

void dataconfig::setRelative(const quint64 &Relative)
{
    m_Relative = Relative;
}

QVector<quint16> dataconfig::Samples() const
{
    return m_Samples;
}

void dataconfig::setSamples(const QVector<quint16> &Samples)
{
    m_Samples = Samples;
}
