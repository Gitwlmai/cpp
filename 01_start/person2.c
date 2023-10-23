#include <stdio.h>


int main(int argc, char **argv)
{
    char *name[2] = {"zhangsan", "lisi"};
    int age[2] = {20, 30};
    char *work[2] = {"tearcher", "doctor"};
    int i = 0;
    
    for(i = 0; i < 2; i++)
    {
        printf("name %s age %d work %s \n", name[i], age[i], work[i]);
    }

    return 0;
}