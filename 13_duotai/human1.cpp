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

void test(Human h)
{
    h.eating();
}

int main(void)
{
    Human h;
    EnglishMan e;
    Chinese c;

    test(h);
    test(e);
    test(c);

    cout<<"human : "<<sizeof(h)<<endl;
    cout<<"chinese : "<<sizeof(c)<<endl;
    cout<<"english : "<<sizeof(e)<<endl;
    return 0;
}