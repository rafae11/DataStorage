#ifndef MESSAGEBASE_H
#define MESSAGEBASE_H

#include <QDataStream>

#include "message_global.h"

class MESSAGESHARED_EXPORT MessageBase
{

public:

    virtual ~MessageBase(){}
    virtual void serialize(QDataStream &ds) const = 0;
    virtual void deserialize(QDataStream &ds) = 0;

    quint8 Header() const;
    void setHeader(const quint8 &Header);

protected:
    quint8 m_Header;
};

#endif // MESSAGEBASE_H
