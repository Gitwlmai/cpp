#include <stdio.h>


int main(void)
{
    double d = 10.1;
    int i = d;
    const char *str = "abcdef";
    char *str2 = const_cast<char *>(str);
    int *p = reinterpret_cast<int *>(str2);


    return 0;
}