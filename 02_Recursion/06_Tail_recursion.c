#include<stdio.h>

/*
if a recursive a function is calling itself and that recursive call is the last
statement in the function then it is called a Tail Recursion
*/

void fun(int n)
{
    if(n>0)
    {
        printf("%d\n", n);
        fun(n-1);                           //--->last statement is calling itself that is called tail recursion
    }
}

//tail recursion can be easily converted into loops

/*
if you have to write a tail recursion then it is better to write a loop function
since it is better in terms of space complexity 
*/

//using loop comparing
void fun2(int n)
{
    while(n>0)
    {
        printf("%d\n",n);
        n--;
    }
}

int main()
{
    printf("using tail recursion\n");
    fun(5);
    printf("\nnusing loop\n");
    fun2(5);
}
