#include<iostream>
using namespace std;

template<class T>
class Arithmaetic
{
    private:
    T a;
    T b;

    public:
    Arithmaetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmaetic<T>::Arithmaetic(T a, T b)
{
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmaetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arithmaetic<T>::sub()
{
    T  c;
    c = a - b;
    return c;
}
int main()
{
    Arithmaetic <int> ar(10,5);
    cout<<ar.add();
    Arithmaetic <float> cri(1.3,1.2);
    cout<<cri.sub();
}