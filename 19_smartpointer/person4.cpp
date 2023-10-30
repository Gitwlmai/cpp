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

    Sp(const Sp &sp)
    {
        cout<<"Sp(Sp &p)"<<endl;
        this->p = sp.p;
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

void test_func(Sp &sp_test)
{
    Sp sp = sp_test;
    sp->printInfo();
}

int main(void)
{
    Sp other = new Person();
    int i = 0;
    for(i = 0; i < 2; i++)
    {
        test_func(other);
    }
    return 0;
}


