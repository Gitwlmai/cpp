#include <iostream>
#include <unistd.h>
#include <string.h>

using namespace std;

class Person 
{
private:
    char *name;
    int age;
    char *work;

public:
    Person() 
    {
        // cout<<"Person ()"<<endl;
    }

    Person(char *name)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        // cout<<"Person(char *name)"<<endl;
    }

    Person(char *name, int age)
    {
        this->name = new char[strlen(name) + 1];
        this->age = age;
        strcpy(this->name, name);
        // cout<<"Person(char *name, int age)"<<endl;
    }

    Person(char *name, int age, char *work)
    {
        this->name = new char[strlen(name) + 1];
        this->work = new char[strlen(work) + 1];
        this->age = age;
        strcpy(this->name, name);
        strcpy(this->work, work);
        // cout<<"Person(char *name, int age, char *work)"<<endl;
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
        // cout<<"name: "<<name<<" age: "<<age<<" work: "<<work<<endl;
    }
};


int test_func(void)
{
    Person *per1 = new Person;
    Person *per2 = new Person();
    Person *per3 = new Person[2];
    Person *per4 = new Person("zhangsan", 20, "student");
    Person *per5 = new Person("zengwu");
   
    per1->setAge(10);
    per1->setName("dengyi");
    per1->setWork("docker");
    per2->setAge(20);
    per2->setName("wanger");
    per2->setWork("teacher");
    per1->printInfo();
    per2->printInfo();
    per4->printInfo();

    delete per1;
    delete per2;
    delete []per3;
    delete per4;
    delete per5;

    return 0;
}

int main(void)
{
    int i = 0;

    for(i = 0; i < 1000000; i++)
    {
        test_func();
    }

    cout<<"test func end"<<endl;

    sleep(10);

    return 0;
}