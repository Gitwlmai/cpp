#include <iostream>

using namespace std;

class Person 
{
private:
    char *name;
    int age;
    char *work;

public:
    Person() {cout<<"Person ()"<<endl;}

    Person(char *name)
    {
        this->name = name;
        cout<<"Person(char *name)"<<endl;
    }

    Person(char *name, int age)
    {
        this->name = name;
        this->age = age;
        cout<<"Person(char *name, int age)"<<endl;
    }

    Person(char *name, int age, char *work)
    {
        this->name = name;
        this->age = age;
        this->work = work;
        cout<<"Person(char *name, int age, char *work)"<<endl;
    }

    void setName(char *name)
    {
        this->name = name;
    }

    void setWork(char *work)
    {
        this->work = work;
    }

    int setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            this->age = 0;
            return -1;
        }
        this->age = age;
        return 0;
    }

    void printInfo(void)
    {
        cout<<"name: "<<name<<" age: "<<age<<" work: "<<work<<endl;
    }
};


int main(int argc, char **argv)
{
    Person per1;
    Person per2("wanger");
    Person per3("zhangsan", 20);
    Person per4("lisi", 30, "tearcher");

    per1.setAge(10);
    per1.setName("dengyi");
    per1.setWork("docker");
    per1.printInfo();
    per2.printInfo();
    per3.printInfo();
    per4.printInfo();

    return 0;
}