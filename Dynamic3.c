#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr =NULL;

    ptr =(int *)malloc(5 * sizeof(int));

    //Use thr memory

    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    free(ptr);

    return 0;
}