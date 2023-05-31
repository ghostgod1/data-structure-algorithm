#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle *p;                                    //creating pointer variable for sturcture
    p = (struct rectangle*)malloc(sizeof(struct rectangle));//creating structure dynamically
    p->length=10;
    p->breadth=5;
    printf("%d\n%d",p->breadth,p->length);
}