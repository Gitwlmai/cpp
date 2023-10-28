#include <stdio.h>


int main(void)
{
    double d = 10.1;
    int i = d;
    char *str = "abcdef";
    int *p = str;

    printf("i %d, str %p p %p\n", i, str, p);

    return 0;
}