#include <stdio.h>
#include "person.h"

int main(int argc, char **argv)
{
    Person per;
    per.setName("zhangsan");
    per.setWork("teacher");
    per.setAge(20);
    per.printInfo();
    return 0;
}