/*
if a recursion function is calling itself only one time then it is a
LINEAR RECURSION function.

if a recursion function is calling itself more than one time then it is 
TREE RECURSION function.
*/

#include<stdio.h>

void fun(int n)
{
    if (n>0)
    {
        printf("%d\n",n);
        fun(n-1);
        fun(n-1);
    }  
}

int main()
{
    fun(3);
}