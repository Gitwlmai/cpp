#include <iostream>

using namespace std;

class Point 
{
private:
    int x;
    int y;

public:
    Point() 
    {
        cout<<"Point()"<<endl;
    }
    Point(int x, int y) : x(x), y(y) 
    {
        cout<<"Point(int x, int y)"<<endl;
    }
    
    ~Point()
    {
        cout<<"~Point()"<<endl;
    }

    Point(const Point &p)
    {
        this->x = p.x;
        this->y = p.y;
        cout<<"Point(Point &p)"<<endl;
    }

    void setX(int x);
    void setY(int y);
    int getX(void);
    int getY(void);
    void printInfo(void);

    friend Point add(Point &a, Point &b);
    friend Point operator+(Point &a, Point &b);
    friend Point operator++(Point &p);
    friend Point operator++(Point &p, int a);
};

void Point::setX(int x)
{
    this->x = x;
}
void Point::setY(int y)
{
    this->y = y;
}

int Point::getX(void)
{
    return this->x;
}

int Point::getY(void)
{
    return this->y;
}

void Point::printInfo(void)
{
    cout<<x<<","<<y<<endl;
}

Point add(Point &a, Point &b)
{
    Point c;

    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

Point operator+(Point &a, Point &b)
{
    Point c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    cout<<"operator+"<<endl;
    return c;
}

//++p
Point operator++(Point &p)
{
    cout<<"++p"<<endl;
    p.x += 1;
    p.y += 1;
    return p;
}

//p++
Point operator++(Point &p, int a)
{
    cout<<"p++"<<endl;
    Point tmp;
    tmp = p;
    p.x += 1;
    p.y += 1;
    return tmp;
}


int main(void)
{
    Point a(1, 2);
    Point b(3, 4);

    Point c = a + b;
    c.printInfo();

    // Point n = ++a;
    // n.printInfo();
    // a.printInfo();

    // Point m = a++;
    // m.printInfo();
    // a.printInfo();
    return 0;
}