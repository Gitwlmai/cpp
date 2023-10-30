#include <iostream>

using namespace std;

int& max(int &a, int &b)
{
    return a < b ? b : a;
}

float& max(float &a, float &b)
{
    return a < b ? b : a;
}

double& max(double &a, double &b)
{
    return a < b ? b : a;
}


int main(int argc, char **argv)
{
    int ia = 1, ib = 2;
    int ic = max(ia, ib);
    cout<<"ic : "<<ic<<endl;

    float fa = 10.0, fb = 20.0;
    float fc = max(fa, fb);
    cout<<"fc : "<<fc<<endl;

    int da = 30.0, db = 20.0;
    int dc = max(da, db);
    cout<<"dc : "<<dc<<endl;

    return 0;
}