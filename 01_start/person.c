#include <stdio.h>

int main(int argc, char **argv)
{
    char *zs_name = "zhangsan";
    int zs_age = 20;

    char *ls_name = "lisi";
    int ls_age = 30;

    printf("zhangsan: %s %d \n", zs_name, zs_age);
    printf("lisi: %s %d \n", ls_name, ls_age);

    return 0;
}