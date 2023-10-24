#include <stdio.h>
#include "person.h"
#include "dog.h"

using namespace A;
using namespace C;

int main(int argc, char **argv)
{
    Person per;
    per.setName((char *)"zhangsan");
    per.setWork((char *)"teacher");
    per.setAge(20);
    per.printInfo();
    A::printVersion();

    Dog dog;
    dog.setName((char *)"wangcai");
    dog.setAge(10);
    dog.printInfo();
    C::printVersion();
    return 0;
}