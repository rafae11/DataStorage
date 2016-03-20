#ifndef STOREDATAREQUEST_H
#define STOREDATAREQUEST_H

#include <QDebug>

#include "message_global.h"
#include "messagebase.h"
#include "dataconfig.h"

class MESSAGESHARED_EXPORT StoreDataRequest : public MessageBase, public dataconfig
{

public:

    StoreDataRequest();
    ~StoreDataRequest();
    void serialize(QDataStream &ds) const;
    void deserialize(QDataStream &ds);

};

#endif // STOREDATAREQUEST_H
