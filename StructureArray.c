#include<stdio.h>

struct hello
{
    int arr[3];     //12
    float f;        //4
}hobj;              //16

int main()
{
    printf("size of object: %lu \n",sizeof(hobj));

    
    return 0;
}