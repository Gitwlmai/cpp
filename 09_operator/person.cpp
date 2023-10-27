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
        name = NULL;
        work = NULL;
    }

    Person(char *name)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->work = NULL;
        cout<<"Person(char *name)"<<endl;
    }

    // Person(char *name, int age)
    // {
    //     this->name = new char[strlen(name) + 1];
    //     this->age = age;
    //     strcpy(this->name, name);
    //     this->work = NULL;
    //     cout<<"Person(char *name, int age)"<<endl;
    // }

    Person(char *name, int age, char *work = "none")
    {
        this->name = new char[strlen(name) + 1];
        this->work = new char[strlen(work) + 1];
        this->age = age;
        strcpy(this->name, name);
        strcpy(this->work, work);
        cout<<"Person(char *name, int age, char *work)"<<endl;
    }

    Person(Person &p)
    {
        cout<<"Person(Person &p)"<<endl;
        this->name = new char[strlen(p.name) + 1];
        this->work = new char[strlen(p.work) + 1];
        this->age = p.age;
        strcpy(this->name, p.name);
        strcpy(this->work, p.work);
    }

    ~Person()
    {
        cout<<"~Person()"<<endl;
        if(this->name)
        {
            cout<<"name: "<<name<<endl;
            delete this->name;
        }
        if(this->work)
        {
            cout<<"work: "<<work<<endl;
            delete this->work;
        }
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

    Person& operator=(Person &p)
    {
        cout<<"Person& operator=(Person &p)"<<endl;
        if(this == &p)
        {
            return *this;
        }
 
        if(this->name)
        {
            delete this->name;
        }
        if(this->work)
        {
            delete this->work;
        }

        this->name = new char[strlen(p.name) + 1];
        this->work = new char[strlen(p.work) + 1];
        this->age = p.age;
        strcpy(this->name, p.name);
        strcpy(this->work, p.work);
        return *this;
    }

    void printInfo(void)
    {
        cout<<"name: "<<name<<" age: "<<age<<" work: "<<work<<endl;
    }
};

int main(void)
{
    Person p1("zhangsan", 20);
    Person p2 = p1;
    Person p3;
    p3 = p1;
    p1.printInfo();
    p2.printInfo();
    p3.printInfo();
    return 0;
}