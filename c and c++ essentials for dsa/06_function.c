#include<stdio.h>
#include<stdlib.h>
int add(int x , int y)
{
    int z = x + y;
    return z;
}
int main()
{
    int a, b, c;
    a = 20;
    b = 30;
    c = add(a,b);
    printf("%d",c);

}