#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r={10,5};
    printf("length= %d\n",r.length);
    printf("breadth= %d\n",r.breadth);

    //modifying length and bredth of rectangle of stucture using dot operator
    r.length = 15;
    r.breadth = 10;
    printf("length= %d\n",r.length);
    printf("breadth= %d\n",r.breadth);

    printf("Area of rectangle is %d",r.length*r.breadth);

    
}