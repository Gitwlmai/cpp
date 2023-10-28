#ifndef _HUMAN_H_
#define _HUMAN_H_

#include <iostream>

using namespace std;

class Human 
{
private:
    char *name;
public:
    void setName(char *name);
    char *getName(void);
    virtual void eating(void) {cout<<"use hand to eat"<<endl;}
    void driving(void);
    void wearing(void);
};

#endif