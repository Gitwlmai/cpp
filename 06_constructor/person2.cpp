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
    Person *per1 = new Person;
    Person *per2 = new Person();
    Person *per3 = new Person[2];
    Person *per4 = new Person("zhangsan", 20, "student");
   
    per1->setAge(10);
    per1->setName("dengyi");
    per1->setWork("docker");
    per2->setAge(20);
    per2->setName("wanger");
    per2->setWork("teacher");
    per1->printInfo();
    per2->printInfo();
    // per3->printInfo();
    // (per3 + 1)->printInfo();
    per4->printInfo();

    delete per1;
    delete per2;
    delete []per3;
    delete per4;

    return 0;
}