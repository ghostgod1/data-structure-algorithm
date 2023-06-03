#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r = {10,5};
    struct rectangle *p = &r;    //defining pointer for structure
    
    r.length = 15;

    (*p).length = 16;   //method for calling pointer 
    p->length = 17;     //another method for calling pointer
    p->breadth = 12;

    printf("%d",*p);
}