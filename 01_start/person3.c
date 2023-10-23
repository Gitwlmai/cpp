#include <stdio.h>

typedef struct person 
{
    char *name;
    int age;
    char *work;
}person_t;

int main(int argc, char **argv)
{
    person_t person[2] = {
            {"zhangsan", 20, "tearcher"}, 
            {"lisi", 30, "doctor"}};
    int i = 0;
    for(i = 0; i < 2; i++)
    {
        printf("name %s age %d work %d\n", person[i].name, person[i].age, person[i].work);
    }

    return 0;
}