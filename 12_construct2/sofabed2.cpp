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

    Furniture() {cout<<"Furniture()"<<endl;}
    ~Furniture() {cout<<"~Furniture()"<<endl;}
};

class Certification3C
{
public:
    Certification3C() {cout<<"Certification3C()"<<endl;}
    ~Certification3C() {cout<<"~Certification3C()"<<endl;}
};

class Sofa : virtual public Furniture, virtual public Certification3C
{
private:
    int a;
public:
    void watchTV(void)
    {
        cout<<"watch TV on sofa"<<endl;
    }  
    Sofa() {cout<<"Sofa()"<<endl;}
    ~Sofa() {cout<<"~Sofa()"<<endl;}
};

class Bed : virtual public Furniture, virtual public Certification3C
{
private:
    int b;
public:
    void sleep(void)
    {
        cout<<"sleep on sofa"<<endl;
    }  

    Bed() {cout<<"Bed()"<<endl;}
    ~Bed() {cout<<"~Bed()"<<endl;}
};

class SofaBed : public Sofa, public Bed
{
private:
    int c;
public:
    SofaBed() {cout<<"SofaBed()"<<endl;}
    ~SofaBed() {cout<<"~SofaBed()"<<endl;}
};

class LeftRightCom
{
public:
    LeftRightCom() {cout<<"LeftRightCom()"<<endl;}
    ~LeftRightCom() {cout<<"~LeftRightCom()"<<endl;}

};

class Type 
{
public:
    Type() {cout<<"Type()"<<endl;}
    ~Type() {cout<<"~Type()"<<endl;}
};

class Date 
{
public:
    Date() {cout<<"Date()"<<endl;}
    ~Date() {cout<<"~Date()"<<endl;}
};

class LeftRightSofaBed : public SofaBed, virtual public LeftRightCom
{
private:
    Type type;
    Date date;
public:
    LeftRightSofaBed() {cout<<"LeftRightSofaBed()"<<endl;}   
    ~LeftRightSofaBed() {cout<<"~LeftRightSofaBed()"<<endl;}   
};

int main(void)
{
    LeftRightSofaBed s;


    return 0;
}