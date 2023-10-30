#include <iostream>

using namespace std;

template<typename T> 
class AAA
{
private:
    T t;
public:
    void test_func(const T &t);
    void printInfo(void);
};

template<typename T>
void AAA<T>::test_func(const T &t)
{
    this->t = t;
}

template<typename T>
void AAA<T>::printInfo(void)
{
    cout<<this->t<<endl;
}

int main(int argc, char **argv)
{
    AAA<int> a;
    a.test_func(1);
    a.printInfo();

    AAA<double> b;
    b.test_func(2.34);
    b.printInfo();

    return 0;
}