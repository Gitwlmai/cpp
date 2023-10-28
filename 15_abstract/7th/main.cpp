#include "chinese.h"
#include "englishman.h"
#include "human.h"
#include <iostream>

using namespace std;

// void test_func(Human &h)
// {
//     h.eating();
// }

void test_func(Human *h)
{
    h->eating();
}

int main(int argc, char **argv)
{
    Chinese c;
    Englishman e;
    // Human h1;
    Human &h = c;

    c.setName("zhangsan");
    e.setName("bill");

    test_func(&c);
    test_func(&e);

    return 0;
}