//DataItem.cc
//这是队DataItem.hh的实现

#include "sybie/datain/DataItem.hh"

#include "sybie/datain/Pool.hh" //class Pool

namespace sybie {
namespace datain {

DataItem::DataItem(const char* data_id, const int index, const char* data_txt)
{
    Pool::GetGlobalPool().Set(data_id, index, data_txt);
}

} //namespace datain
} //namespace sybie
