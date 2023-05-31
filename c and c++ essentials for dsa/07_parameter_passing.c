 #include<stdio.h>
#include<stdlib.h>
void swap_value(int x, int y)              // swap funtion for calling by value
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_address(int *p, int *q)        //swap funtion for calling by addrress
{
    int tempo = *p;
    *p = *q;
    *q = tempo;
}

int main()
{
    int a, b, c, d;
    a = 10;
    b = 20;

    c = 5;
    d = 10;

    //call by value
    swap_value(a,b);
    printf("a = %d\nb = %d\n",a,b);         //call by value doesnt work for swap funtion or a funtion which needs to change the parametes

    //call by address
    swap_address(&c,&d);                   //therefore we use call by address, here we passed the address of the variable in the funtion
    printf("c = %d\nd = %d",c,d);
}