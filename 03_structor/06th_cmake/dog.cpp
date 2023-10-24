#include <iostream>
#include "dog.h"

using std::cout;
using std::endl;

namespace C {
 void Dog::setName(char *name)
{
    this->name = name;
}

int Dog::setAge(int age)
{
    if(age < 0 || age > 20)
    {
        this->age = 0;
        return -1;
    }
    this->age = age;
    return 0;
}

void Dog::printInfo(void)
{
    cout<<"name"<<name<<"age:"<<age<<endl;
}

void printVersion(void)
{
    cout<<"dog version v1"<<endl;
}
}