#include <iostream>

using namespace std;


void C(void)
{
    throw 1;
}

void B(void)
{
    C();
}

void A(void)
{
    try
    {
        B();
    }catch(int i)
    {
        cout<<"catch exception: "<<i<<endl;
    }
}

int main(int argc, char **argv)
{

    A();
    return 0;
}