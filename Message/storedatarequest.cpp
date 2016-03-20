#include "storedatarequest.h"

StoreDataRequest::StoreDataRequest()
{
    qDebug() << "starting " << this;
    setHeader('1');
}

StoreDataRequest::~StoreDataRequest()
{
    qDebug() << "closing" << this;
}

void StoreDataRequest::serialize(QDataStream &ds) const
{
    ds << Header() << DateTime() << Relative() << Samples();
}

void StoreDataRequest::deserialize(QDataStream &ds)
{
    quint8          header;
    QDateTime       datetime;
    quint64         relative;
    QVector<quint16> samples;


    ds >> header >> datetime >> relative >> samples;

    setHeader(header);
    setDateTime(datetime);
    setRelative(relative);
    setSamples(samples);
}
