#include<stdio.h>
#include<stdlib.h>
int * fun(int n)
{
    int *P;
    P = (int *)malloc(n*sizeof(int));
    return (P);
}
int main()
{
    int *A;
    A = fun(5);
}