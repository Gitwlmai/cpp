#include <iostream>

using namespace std;
template<typename T>
T& mymax(T& a, T& b)
{
    cout<<__PRETTY_FUNCTION__<<endl;
    return a < b ? b : a;
}


int main(int argc, char **argv)
{
    int ia = 1, ib = 2;
    int ic = mymax(ia, ib);
    cout<<"ic : "<<ic<<endl;

    float fa = 10.0, fb = 20.0;
    float fc = mymax(fa, fb);
    cout<<"fc : "<<fc<<endl;

    double da = 30.0, db = 20.0;
    double dc = mymax(da, db);
    cout<<"dc : "<<dc<<endl;

    return 0;
}