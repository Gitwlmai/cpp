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
    Human &e = CreateEnglish("qingyuan");

    delete &e;

    return 0;
}