#include<stdio.h>
#include<stdlib.h>

struct rectangle
{
    int length;
    int breadth;
};
void intialize(struct rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(struct rectangel r)
{
    return r.length*r.breadth;
}
void changelength(struct rectangel *r, int l)
{
    r->lenght = l;
}
int main()
{
    struct rectangele r;

    intialize(&r,10,5);
    area(r);
    changelength(&r,20);
}
