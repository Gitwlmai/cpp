#include "englishman.h"
#include <iostream>
#include <string.h>

using namespace std;

void Englishman::eating(void)
{
    cout<<"englishman eating, test .so"<<endl;
}

void Englishman::driving(void)
{
    cout<<"englishman driving"<<endl;
}

void Englishman::wearing(void)
{
     cout<<"englishman wearing"<<endl;
}

Englishman::Englishman() {}

Englishman::Englishman(char *addr)
{
    cout<<"Englishman construct"<<endl;
    memset(this->address, 0, 1000);
    strcpy(this->address, addr);
}