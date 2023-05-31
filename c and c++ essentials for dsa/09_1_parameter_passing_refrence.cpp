#include<iostream>
using namespace std;
void swap_refrence(int &x, int &y) //swap funtion for calling by refrence, should not be used often
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    a = 5;
    b = 10;
    swap_refrence(a,b);                  // works in c++ not c used for simple code
    cout<<"a = "<<a<<"\nb = "<<b;
}