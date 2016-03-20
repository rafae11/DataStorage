#include "data.h"

Data::Data()
{

}

void Data::OpenFile(QString filename)
{
    m_file.setFileName(filename);

    if(m_file.open(QIODevice::ReadWrite))
    {

    }
    else
    {

    }
}

void Data::CloseFile()
{
    if(m_file.isOpen())
    {
        m_file.close();
    }
}

void Data::WriteToFile(packet &packet)
{
    QDataStream ds(&m_file);
    //ds << packet;

}

void Data::StorePacket(packet &packet)
{
    m_buffer.push_back(packet);
}
