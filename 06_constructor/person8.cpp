#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

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
        cout<<"Person ()"<<endl;
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

    Person(char *name, int age)
    {
        this->name = new char[strlen(name) + 1];
        this->age = age;
        strcpy(this->name, name);
        this->work = NULL;
        cout<<"Person(char *name, int age)"<<endl;
    }

    Person(char *name, int age, char *work)
    {
        this->name = new char[strlen(name) + 1];
        this->work = new char[strlen(work) + 1];
        this->age = age;
        strcpy(this->name, name);
        strcpy(this->work, work);
        cout<<"Person(char *name, int age, char *work)"<<endl;
    }

    Person(Person &per)
    {
        cout<<"Person(Person &per)"<<endl;
        this->name = new char[strlen(per.name) + 1];
        strcpy(this->name, per.name);

        this->work = new char[strlen(per.work) + 1];
        strcpy(this->work, per.work);
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

    void printInfo(void)
    {
        cout<<"name: "<<name<<" age: "<<age<<" work: "<<work<<endl;
        printf("name addr %p \n", name);
        printf("work addr %p \n", work);
    }
};

class Student : public Person 
{
private:
    int id;

public:
    Student() 
    {
        cout<<"Student"<<endl;
    }
    
    Student(int id)
    {
        cout<<"Student(int id)"<<endl;
        this->id = id;
    }

    ~Student()
    {
        cout<<"~Student"<<endl;
    }
};


int main(void)
{
    Student s(10);
    return 0;
}