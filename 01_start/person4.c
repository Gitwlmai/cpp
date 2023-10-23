#include <stdio.h>

typedef struct person 
{
    char *name;
    int age;
    char *work;
    void (*printInfo)(struct person *person);
}person_t;

void printInfo(struct person *person)
{
    printf("name %s age %d work %s\n", person->name, person->age, person->work);
}

int main(int argc, char **argv)
{
    person_t person[2] = {
            {"zhangsan", 20, "tearcher", printInfo}, 
            {"lisi", 30, "doctor", printInfo}};
   
    person[0].printInfo(&person[0]);
    person[1].printInfo(&person[1]);
    return 0;
}