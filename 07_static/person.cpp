#include <iostream>

using namespace std;

class Person 
{
private:
    static int count;
    char *name;
    int age;
    char *work;

public:

    static int getCount(void);

    Person() 
    {
        count++;
        cout<<"Person ()"<<endl;
    }

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

int Person::count = 0;


int Person::getCount(void)
{
    return count;
}

int main(int argc, char **argv)
{
    Person per[4];
    Person *per_pointer = new Person[10];

    cout<<"count = "<<Person::getCount()<<endl;
    cout<<"count = "<<per[0].getCount()<<endl;
    cout<<"count = "<<per[1].getCount()<<endl;
    cout<<"count = "<<per_pointer[0].getCount()<<endl;
    cout<<"count = "<<per_pointer[2].getCount()<<endl;
    return 0;
}