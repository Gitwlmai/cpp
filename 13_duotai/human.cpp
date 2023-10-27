#include <iostream>

using namespace std;


class Human 
{
public:
    void eating(void)
    {
        cout<<"use hand for eat"<<endl;
    }
};

class EnglishMan : public Human
{
public:
    void eating(void)
    {
        cout<<"use fork for eat"<<endl;
    }
};

class Chinese : public Human
{
public:
    void eating(void)
    {
        cout<<"use kuaizi for eat"<<endl;
    }
};

void test(Human &h)
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

    return 0;
}