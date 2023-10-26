#include <iostream>

using namespace std;

class Point 
{
private:
    int x;
    int y;

public:
    Point() {}
    Point(int x, int y) : x(x), y(y) 
    {
        // cout<<"Point(int x, int y)"<<endl;
    }

    void setX(int x);
    void setY(int y);
    int getX(void);
    int getY(void);
    void printInfo(void);

    friend Point add(Point &a, Point &b);
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
    // c.setX(a.getX() + b.getX());
    // c.setY(a.getY() + b.getY());

    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

int main(void)
{
    Point a(1, 2);
    Point b(3, 4);

    Point c = add(a, b);
    c.printInfo();
    return 0;
}