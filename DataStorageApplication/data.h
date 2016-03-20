#ifndef DATA_H
#define DATA_H

#include <QFile>
#include <QVector>
#include <QDateTime>
#include <QDataStream>

struct packet
{
    QDateTime datetime;
    quint64 relative;
    quint16 samples[8];
};

class Data
{
public:
    Data();
    void OpenFile(QString filename);
    void CloseFile();
    void WriteToFile(packet& packet);
    void StorePacket(packet& packet);

private:
    QFile m_file;
    QVector<packet> m_buffer;

};

#endif // DATA_H
