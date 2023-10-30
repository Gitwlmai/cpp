#include <iostream>
#include <stdlib.h>

using namespace std;

void C(int i)
{
    int ia = 1;
    float fb = 2.0;
    double dc = 3.456;
    if(i == 0)
        return;
    else if(i == 1)
        throw ia;
    else if(i == 2)
        throw fb;
    else 
        throw dc;
    
}

void B(int i)
{
    cout<<"call C ..."<<endl;
    C(i);
    cout<<"after call c"<<endl;
}

void A(int i)
{
    try
    {
        B(i);
    }
    catch(int j)
    {
        cout<<"catch exception: "<<j<<endl;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    if(argc != 2)
    {
        cout<<"usage: "<<argv[0]<<"+<0|1|2|3>"<<endl;
        return 0;
    }

    i = strtoul(argv[1], NULL, 0);
    A(i);
    return 0;
}