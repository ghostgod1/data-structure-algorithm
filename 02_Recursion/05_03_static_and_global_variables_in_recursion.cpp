#include<iostream>
using namespace std;

int fun(int n)
{
    if (n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}

int fun2(int m)                          //for static variable
{
    static int x=0;//--static variable
    if (m>0)
    {
        x++;
        return fun2(m-1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d\n\n", r);

    int q;
    q = fun2(5);
    printf("%d\n", q);

    return 0;
}