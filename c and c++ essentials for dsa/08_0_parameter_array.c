#include<stdio.h>
#include<stdlib.h>
void arrayfunction(int *A, int b) //instead of *A, A[] can also be used but it will specifically accept arrays
{
    for(int i = 0; i<b ; i++)
    printf("%d\n",A[i]);

    A[0] = 10;
    printf("A[0] = %d\n",A[0]);  //modification made in funtion can be seen in the main program

    for(int i = 0; i<b ; i++)
    printf("%d\n",A[i]);
}
int main()
{
    int A[5] = {20,12,15,14,32};
    arrayfunction(A,5);
}