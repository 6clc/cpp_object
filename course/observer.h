#ifndef __OBSERVER__
#define __OBSERVER__

#include "subject.h"
class Observer{
    public:
    virtual void update(Subject* sub, int value)=0;
};

#endif