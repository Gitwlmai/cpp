#ifndef _CHINESE_H_
#define _CHINESE_H_

#include "human.h"

class Chinese : public Human
{
public:
    void eating(void);
    void driving(void);
    void wearing(void);

    Chinese();
    virtual ~Chinese();
};

#endif