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

    for(int i=0; i<5; i++)
    {
        A[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }
    
}