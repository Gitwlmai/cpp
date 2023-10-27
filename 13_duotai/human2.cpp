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
    virtual ~Human()
    {
        cout<<"~Human()"<<endl;
    }
};

class EnglishMan : public Human
{
public:
    void eating(void)
    {
        cout<<"use fork to eat"<<endl;
    }

    virtual ~EnglishMan()
    {
        cout<<"~EnglishMan()"<<endl;
    }
};

class Chinese : public Human
{
public:
    void eating(void)
    {
        cout<<"use kuaizi to eat"<<endl;
    }

    virtual ~Chinese()
    {
        cout<<"~Chinese()"<<endl;
    }
};

void test(Human h)
{
    h.eating();
}

int main(void)
{
    Human *h = new Human;
    EnglishMan *e = new EnglishMan;
    Chinese *c = new Chinese;

    Human *p[3] = {h, e, c};

    int i = 0;
    for(i = 0; i < 3; i++)
    {
        p[i]->eating();
        delete p[i];
    }
   
    return 0;
}