#include <stdio.h>

class Person 
{
private:
    char *name;
    int age;
    char *work;

public:
    void printInfo(void)
    {
        printf("name %s age %d work %s\n", name, age, work);
    }
};


int main(int argc, char **argv)
{
    Person per;
    per.name = "zhangsan";
    per.printInfo();
    return 0;
}