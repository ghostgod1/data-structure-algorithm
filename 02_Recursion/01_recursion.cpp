/*
Recursion is a funtion calling itselff

    General form:

    datatype function(parameters)
    {
        if(<base condition>)
        {
            1.____________
            2.fun(parameter);   ----->funtion calling itself
            3.____________      
        }
    }
*/

#include<iostream>
using namespace std;

void fun1(int n)
{
    if(n>0)                         //function or recursion terminating condition
    {
        printf("%d\n", n);
        fun1(n-1);                  //Recursive funtion 
    }
}

void fun2(int n)
{
    if(n>0)                          //function or recursion terminating condition
    {
        fun2(n-1);                  //Recursive funtion
        printf("%d\n",n);
    }
}

int main()
{
    int x=3;
    fun1(x);

    printf("\n\n\n------------function1 ends here--------------\n\n\n");

    int y=3;
    fun2(y);
}

