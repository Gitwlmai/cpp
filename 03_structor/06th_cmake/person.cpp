#include <iostream>
#include "person.h"

namespace A {

using namespace std;

void Person::setName(char *name)
{
    this->name = name;
}

int Person::setAge(int age)
{
    if(age < 0 || age > 150)
    {
        this->age = 0;
        return -1;
    }
    this->age = age;
    return 0;
}

void Person::printInfo(void)
{
    cout<<"name:"<<name<<"age:"<<age<<"work"<<work<<endl;
}

void Person::setWork(char *work)
{
    this->work = work;
}

void printVersion(void)
{
    cout<<"person version v1"<<endl;
}
}