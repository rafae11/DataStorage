#ifndef OVERLOADS_H
#define OVERLOADS_H

#include "storedatarequest.h"

QDataStream& operator << (QDataStream& ds, StoreDataRequest const& b)
{
    b.serialize(ds);
    return ds;
}

QDataStream& operator >> (QDataStream& ds, StoreDataRequest& b)
{
    b.deserialize(ds);
    return ds;
}

#endif // OVERLOADS_H
