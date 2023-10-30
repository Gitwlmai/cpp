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

void test_func(void)
{
    Person *per = new Person();
    per->printInfo();
}

int main(void)
{
    test_func();
    return 0;
}


