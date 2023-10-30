#include <iostream>

using namespace std;
template<typename T>
T& mymax(T& a, T& b)
{
    cout<<__PRETTY_FUNCTION__<<endl;
    return a < b ? b : a;
}


template<typename T>
void test_func(T t)
{
    cout<<__PRETTY_FUNCTION__<<endl;
}

int f1(int a)
{
    return 0;
}

int main(int argc, char **argv)
{
    test_func(f1);

    return 0;
}