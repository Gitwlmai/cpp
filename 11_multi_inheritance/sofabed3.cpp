#include <iostream>

using namespace std;

class Furniture 
{
private:
    int weight;

public:
    void setWeight(int weight)
    {
        this->weight = weight;
    }  

    int getWeight(void)
    {
        return this->weight;
    }
};

class Sofa : virtual public Furniture
{
private:
    int a;
public:
    void watchTV(void)
    {
        cout<<"watch TV on sofa"<<endl;
    }  
};

class Bed : virtual public Furniture
{
private:
    int b;
public:
    void sleep(void)
    {
        cout<<"sleep on sofa"<<endl;
    }  
};

class SofaBed : public Sofa, public Bed
{
private:
    int c;
};

int main(void)
{
    SofaBed s;
    s.sleep();
    s.watchTV();
    cout<<"sizeof(sofa) : "<<sizeof(Sofa)<<endl;
    cout<<"sizeof(Bed) : "<<sizeof(Bed)<<endl;
    cout<<"sizeof(SofaBed) : "<<sizeof(SofaBed)<<endl;
    s.setWeight(10);

    return 0;
}