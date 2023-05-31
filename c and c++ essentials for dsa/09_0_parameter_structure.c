#include<stdio.h>
#include<stdlib.h>
struct Rectangle                                           //defining the structure
{
    int length;
    int breadth;
};

int area(struct Rectangle x)                              //defining the funtion for passing the structure and passing by using call by value method
{
    return x.length * x.breadth;
    x.length = 20;                                        //since it is a call by value method the the actual parameter is not modified in the funtion 
}

int main()
{
    struct Rectangle r = {3,3};
    printf("area of rectangle is %d",area(r));            //passing the structure as a parameter
    printf("\nlength = %d",r.length);                     //value of length remain same
}