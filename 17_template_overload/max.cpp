#include <iostream>

using namespace std;
template<typename T>
T& mymax(T &a, T &b)
{
    cout<<__PRETTY_FUNCTION__<<endl;
    return a < b ? b : a;
}

template<typename T>
const T& mymax(const T &a, const T &b)
{
    cout<<__PRETTY_FUNCTION__<<endl;
    return a < b ? b : a;
}

// int mymax(int a, int b)
// {
//     cout<<__PRETTY_FUNCTION__<<endl;
//     return a < b ? b : a;
// }



int main(int argc, char **argv)
{
    int ia = 1, ib = 2;
    int ic = mymax<int>(ia, ib);
    cout<<"ic : "<<ic<<endl;

    return 0;
}