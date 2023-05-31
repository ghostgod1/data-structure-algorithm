/*refrence is just another name for a variable and is used for parameter passing */
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a; //refrence variabel

    cout<<a<<"\n";
    r++;
    cout<<r<<"\n";
    cout<<a;
}
