#include <iostream>

using namespace std;


class Human 
{
private:
    int a;
public:
    virtual void eating(void)
    {
        cout<<"use hand to eat"<<endl;
    }
};

class EnglishMan : public Human
{
public:
    void eating(void)
    {
        cout<<"use fork to eat"<<endl;
    }
};

class Chinese : public Human
{
public:
    void eating(void)
    {
        cout<<"use kuaizi to eat"<<endl;
    }
};

class Guangdongman : public Chinese
{
public:
    void eating(void)
    {
        cout<<"use kuaizi to eat come from guagndong"<<endl;
    }
};

void test(Human &h)
{
    EnglishMan *pe;
    Chinese *pc;
    Guangdongman *pg;

    h.eating();

    pe = dynamic_cast<EnglishMan *>(&h);
    if(pe != nullptr)
    {
        cout<<"this is english man"<<endl;
    }

    pc = dynamic_cast<Chinese *>(&h);
    if(pc != nullptr)
    {
        cout<<"this is chinese man"<<endl;
    }

    pg = dynamic_cast<Guangdongman *>(&h);
    if(pg != nullptr)
    {
        cout<<"this is Guangdong man"<<endl;
    }
}

int main(void)
{
    // Human h;
    // EnglishMan e;
    // Chinese c;
    Guangdongman g;

    // test(h);
    // test(e);
    // test(c);
    test(g);

    return 0;
}