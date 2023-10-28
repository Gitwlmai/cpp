#include <iostream>

using namespace std;

class Human 
{
private:
    int a;
public:
    virtual void eating(void) = 0;
    virtual void wearing(void) = 0;
    virtual void driving(void) = 0;
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

    void wearing(void)
    {
        cout<<"englishman wearing"<<endl;

    }
    void driving(void)
    {
        cout<<"englishman driving"<<endl;
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

    void wearing(void)
    {
        cout<<"chinese wearing"<<endl;

    }
    void driving(void)
    {
        cout<<"chinese driving"<<endl;
    }

    virtual ~Chinese()
    {
        cout<<"~Chinese()"<<endl;
    }

    virtual Chinese *test_func(void) 
    {
        cout<<"Chinese test func"<<endl;
        return this;
    }
};


int main(void)
{
    // Human h;
    EnglishMan e;
    Chinese c;
   
    return 0;
}