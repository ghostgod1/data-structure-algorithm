/*
MEMORY HAS THREE SECTION

--Heap Section
    used as a resource for extra memory dynamically allocated and needs to be deleted 
    after to use to prevent memory leak.

--Stack Section
    all the memory required by the program is allocated in stack section
    it is done in stack method and all to memory is allocated at the start of the 
    program therefore also known as static memory allocation.

--Code Section
    Program file is first brought the the code section of the memory to run.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;

    p = new int[5]; //alloacte memory space in heap memory

    delete []p;     //delete alloacted memory from the heap memory its a good practice
}