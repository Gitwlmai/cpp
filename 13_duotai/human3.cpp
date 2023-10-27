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

    virtual Human *test_func(void) 
    {
        cout<<"human test func"<<endl;
        return this;
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

    virtual EnglishMan *test_func(void) 
    {
        cout<<"EnglishMan test func"<<endl;
        return this;
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

    virtual Chinese *test_func(int a) 
    {
        cout<<"Chinese test func"<<endl;
        return this;
    }
};

void test(Human &h)
{
    h.test_func();
}

int main(void)
{
    Human h;
    EnglishMan e;
    Chinese c;

    test(h);
    test(c);
    test(e);
   
    return 0;
}