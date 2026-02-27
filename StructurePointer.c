#include<stdio.h>

struct demo
{
    int i;      //4
    int *ptr;   //8

};              //12

int main()
{
    struct demo dobj;

    printf("size of object: %lu \n",sizeof(dobj));      //8 or 16

    return 0;
}