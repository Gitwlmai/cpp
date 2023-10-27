#include <iostream>

using namespace std;


class Sofa
{
private:
    int weight;
public:
    void watchTV(void)
    {
        cout<<"watch TV on sofa"<<endl;
    }    
};

class Bed
{
private:
    int weight;
public:
    void sleep(void)
    {
        cout<<"sleep on sofa"<<endl;
    }    
};

class SofaBed : public Sofa, public Bed
{

};

int main(void)
{
    SofaBed s;
    s.sleep();
    s.watchTV();

    return 0;
}