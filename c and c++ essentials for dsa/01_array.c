#include<stdio.h>
#include<stdlib.h>
int main()
{
    int luckyNumbers[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    luckyNumbers[1] = 500;

    printf("%d\n",luckyNumbers[9]);
    printf("%d\n",luckyNumbers[1]);
     
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", luckyNumbers[i]);
    }
    

    return 0;

    
}