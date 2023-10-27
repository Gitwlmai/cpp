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
        cout<<"Point(const Point &p)"<<endl;
    }

    void setX(int x);
    void setY(int y);
    int getX(void);
    int getY(void);
    void printInfo(void);

    Point operator+(Point &b)
    {
        Point c;
        c.x = this->x + b.x;
        c.y = this->y + b.y;
        cout<<"operator+"<<endl;
        return c;
    }

    //++p
    Point& operator++(void)
    {
        cout<<"++p"<<endl;
        this->x += 1;
        this->y += 1;
        return *this;
    }

    //p++
    Point operator++(int a)
    {
        cout<<"p++"<<endl;
        Point tmp;
        tmp = *this;
        this->x += 1;
        this->y += 1;
        return tmp;
    }

    ostream& operator<<(ostream &o, Point &p)
    {
        cout<<"("<<p.x<<","<<p.y<<")";
        return o;
    }


    friend Point add(Point &a, Point &b);
    // friend ostream& operator<<(ostream &o, Point &p);
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

// ostream& operator<<(ostream &o, Point &p)
// {
//     cout<<"("<<p.x<<","<<p.y<<")";
//     return o;
// }


int main(void)
{
    Point p1(1, 2);
    Point p2(2, 3);
    Point m;
    Point n;

    Point p3 = p1 + p2;

    cout<<"p1 +p2 = "<<p3<<endl;

    m = ++p1;
    n = p1++;

    cout<<m<<" "<<n<<endl;

    return 0;
}