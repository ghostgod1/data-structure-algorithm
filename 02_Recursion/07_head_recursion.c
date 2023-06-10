#include<stdio.h>

/*
if a function is calling itself and the first statement inside the function is recursive call
then all the processing is done afterwards then it's a Head Recursion
*/

//Head Recursion
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);                      //-->first statement is calling itself that is called head recursion
        printf("%d\n",n);
    }
}

//head recursion cannot be easily converted into loop function

//same function using loop
void fun2(int n)
{
    int i=1;
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}

int main()
{
    printf("using head recursion\n");
    fun(5);
    printf("using loop function\n");
    fun2(5);
}