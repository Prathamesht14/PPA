#include<stdio.h>

//Declaration
struct demo
{
    int i;      //4
    float f;    //4
    char ch;    //1
};              //12


int main()
{
    struct demo dobj;
    printf("%d \n",sizeof(dobj)); //12

    return 0;
}