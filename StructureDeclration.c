#include<stdio.h>

//Declaration
struct demo
{
    int i;      //4
    float f;    //4
};              //8


int main()
{
    struct demo dobj;
    printf("%d \n",sizeof(dobj));

    return 0;
}