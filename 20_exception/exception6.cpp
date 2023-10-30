#include <iostream>
#include <stdlib.h>

using namespace std;

class Myexception
{
public:
    virtual void printInfo(void) 
    {
        cout<<"This is Myexception"<<endl;
    }
};

class Mysubexception : public Myexception
{
public:
    void printInfo(void)
    {
        cout<<"This is Mysubexception"<<endl;
    }
};

void C(int i) throw(int, float)
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
    else if(i == 3)
        throw dc;
    else if(i == 4)
        throw Myexception();
    else if(i == 5)
        throw Mysubexception();
    
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
        cout<<"catch int exception: "<<j<<endl;
    }
    catch(float f)
    {
        cout<<"catch float exception: "<<f<<endl;
    }
    catch(Myexception &e)
    {
        e.printInfo();
    }
    catch(...)
    {
        cout<<"catch other exception"<<endl;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    if(argc != 2)
    {
        cout<<"usage: "<<argv[0]<<"+<0|1|2|3|4|5>"<<endl;
        return 0;
    }

    i = strtoul(argv[1], NULL, 0);
    A(i);
    return 0;
}