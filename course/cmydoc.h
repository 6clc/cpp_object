#ifndef __CMYDOC__
#define __CMYDOC__

#include "cdocument.h"

class CMyDoc : public CDoument
{
    public:
    virtual void Serialize(){
        //只有应用程序知道怎么打开自己的文件
        cout << "CMyDoc::Serialize()"<<endl;
    }
}
#endif