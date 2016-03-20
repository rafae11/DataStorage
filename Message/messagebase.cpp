#include "messagebase.h"

quint8 MessageBase::Header() const
{
    return m_Header;
}

void MessageBase::setHeader(const quint8 &Header)
{
    m_Header = Header;
}
