#include <iostream>

using namespace std;

class RefBase
{
private:
    int count;
public:
    RefBase() : count(0) { cout<<"RefBase()"<<endl;}
    ~RefBase() {cout<<"~RefBase()"<<endl;}
    void incCount(void)
    {
        count++;
    }

    void decCount(void)
    {
        count--;
    }

    int getCount(void)
    {
        return count;
    }

};

class Person : public RefBase
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
        p->incCount();
    }

    Sp(const Sp &sp)
    {
        cout<<"Sp(Sp &p)"<<endl;
        this->p = sp.p;
        p->incCount();
    }

    ~Sp()
    {
        cout<<"~Sp()"<<endl;
        if(p)
        {
            p->decCount();
            if(p->getCount() == 0)
            {
                delete p;
            }
        }
    }

    Person* operator->()
    {
        return p;
    }

    Person& operator*()
    {
        return *p;
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
    (*other).printInfo();
    other->printInfo();
    int i = 0;
    for(i = 0; i < 2; i++)
    {
        test_func(other);
    }
    return 0;
}


