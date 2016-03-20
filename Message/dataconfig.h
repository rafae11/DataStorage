#ifndef DATACONFIG_H
#define DATACONFIG_H

#include "message_global.h"
#include <QDateTime>
#include <QVector>

class MESSAGESHARED_EXPORT dataconfig
{
public:

    QDateTime DateTime() const;
    void setDateTime(const QDateTime &DateTime);

    quint64 Relative() const;
    void setRelative(const quint64 &Relative);

    QVector<quint16> Samples() const;
    void setSamples(const QVector<quint16> &Samples);

protected:
    QDateTime m_DateTime;
    quint64   m_Relative;
    QVector<quint16> m_Samples;
};


#endif // DATACONFIG_H
