#include <stdio.h>

class person 
{
public:
    char *name;
    int age;
    char *work;
    void printInfo(void)
    {
        printf("name %s age %d work %s\n", name, age, work);
    }
};


int main(int argc, char **argv)
{
    person persons[2] = {
            {"zhangsan", 20, "tearcher"}, 
            {"lisi", 30, "doctor"}};
   
    persons[0].printInfo();
    persons[1].printInfo();
    return 0;
}