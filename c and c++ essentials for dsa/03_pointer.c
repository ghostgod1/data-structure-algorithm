#include<stdio.h>
#include<stdlib.h>
int main()
{

    //pointer are address variabel which stores the address of data

    //pointers are mainly used to access heap memory
    //or used to access the resources that are outside the program
    //it is also used for parameter passing

    int a=10;
    int *p;    //address variable or pointer p 

    p = &a;    //& stores the address of a in pointer p

    printf("%d\n", p); //prints the address of a or stored address in p

    printf("%d\n", *p); //this will the value of the real address data which is stored in the pointer


    //malloc is function of stdlib
    //malloc is used to allocate memory in heap memory
    //so the pointer p will store the memory address of heap

    p = (int *)malloc(5 * sizeof(int));

    //In C++ sytax for allocating memory in heap is ==> p = new int[5];

   p[0] = 1;
   printf("%d",p[0]);


}