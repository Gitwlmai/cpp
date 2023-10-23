#include <stdio.h>

typedef struct person 
{
    char *name;
    int age;
}person_t;

int main(int argc, char **argv)
{
    person_t p[2] = {{"zhangsan", 20}, {"lisi", 30}};
    int i = 0;
    for(i = 0; i < 2; i++)
    {
        printf("name %s age %d \n", p[i].name, p[i].age);
    }

    return 0;
}