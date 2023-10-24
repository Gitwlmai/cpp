#include <stdio.h>
#include "person.h"
#include "dog.h"

int main(int argc, char **argv)
{
    A::Person per;
    per.setName((char *)"zhangsan");
    per.setWork((char *)"teacher");
    per.setAge(20);
    per.printInfo();
    A::printVersion();

    C::Dog dog;
    dog.setName((char *)"wangcai");
    dog.setAge(10);
    dog.printInfo();
    C::printVersion();
    return 0;
}