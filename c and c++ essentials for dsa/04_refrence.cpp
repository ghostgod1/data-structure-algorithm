/*refrence is just another name for a variable and is used for parameter passing */
#include<iostream>
using namespace std;
int main()
{
    // * before the variable then it is pointer/address variable
    // & before the variable then it is refrence variable 
    // nothing before the variable then it is data variable


    int a = 10;

    /*refrence is just another name for a variable 
    it is used for parameter passing */
    //refrence must be initialized when declared
    int &r = a; //refrence variabel

    cout<<a<<"\n";
    r++;
    cout<<r<<"\n";
    cout<<a;
}
