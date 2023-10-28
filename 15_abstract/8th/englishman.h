#ifndef _ENGLISHMAN_H_
#define _ENGLISHMAN_H_

#include "human.h"

class Englishman : public Human
{
private:
    char address[1000];
public:
    void eating(void);
    void driving(void);
    void wearing(void);

    Englishman();
    Englishman(char *addr);
};


#endif