#include<iostream>
using namespace std;

struct Rectangle                                         //defining the structure
{
    int length;
    int breadth;
};

int area_refrence(struct Rectangle &x)                  //defining the funtion for passing the structure and passing by using call by refrence method
{
    return x.length * x.breadth;
    x.length++;                                        //since it is a call by refrence method the the actual parameter modified in the funtion 
    printf("len = %d",x.length);
}

int main()
{
    struct Rectangle r = {3,3};
    printf("area of rectangle is %d",area_refrence(r));            //passing the structure as a parameter
    printf("\nlength = %d",r.length);                              //value of length remain same
}