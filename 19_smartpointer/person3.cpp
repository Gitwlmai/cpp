#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        cout<<"Person()"<<endl;
    }
    ~Person()
    {
        cout<<"~Person()"<<endl;
    }

    void printInfo()
    {
        cout<<"just a test function"<<endl;
    }
};

class Sp
{
private:
    Person *p;
public:
    Sp() 
    {
        cout<<"Sp()"<<endl;
    }

    Sp(Person *p)
    {
        cout<<"Sp(Person *p)"<<endl;
        this->p = p;
    }

    ~Sp()
    {
        cout<<"~Sp()"<<endl;
        if(p)
            delete p;
    }

    Person *operator->()
    {
        return p;
    }
};

void test_func(void)
{
    Sp sp = new Person;
    sp->printInfo();
}

int main(void)
{
    test_func();
    return 0;
}


