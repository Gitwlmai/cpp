#include "chinese.h"
#include "englishman.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Chinese c;
    Englishman e;

    c.setName("zhangsan");
    e.setName("bill");

    c.eating();
    e.eating();

    return 0;
}