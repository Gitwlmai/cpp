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

    void setWeight(int weight)
    {
        this->weight = weight;
    }  

    int getWeight(void)
    {
        return this->weight;
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

    void setWeight(int weight)
    {
        this->weight = weight;
    }  

    int getWeight(void)
    {
        return this->weight;
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
    s.setWeight(10);
    return 0;
}