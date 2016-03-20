#ifndef REPLAYCONFIG_H
#define REPLAYCONFIG_H

#include "message_global.h"

#include <QDateTime>

class MESSAGESHARED_EXPORT replayconfig
{
public:

    QDateTime DateTime() const;
    void setDateTime(const QDateTime &DateTime);

protected:
    QDateTime m_DateTime;

};

#endif // REPLAYCONFIG_H
