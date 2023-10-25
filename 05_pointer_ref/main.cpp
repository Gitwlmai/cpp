#include <iostream>

using namespace std;

int add(int a)
{
    a = a+1;
    return a;
}

int add(int *a)
{
    *a = *a + 1;
    return *a;
}

int add_ref(int &c)
{
    c = c + 1;
    return c;
}

int main(void)
{
    int a = 99;
    int &b = a;
    cout<<add(a)<<endl;
    cout<<"a = "<<a<<endl;

    cout<<add(&a)<<endl;
    cout<<"a = "<<a<<endl;

    cout<<add_ref(a)<<endl;
    cout<<"a = "<<a<<endl;

    b++;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}