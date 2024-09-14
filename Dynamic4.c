#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr =NULL;

    ptr = (int *)realloc(NULL, 10 * sizeof(int));  // malloc

    //Use thr memory

    ptr = (int *)realloc(ptr,0);   //free

    return 0;
}