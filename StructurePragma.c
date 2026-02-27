#include<stdio.h>

//Declaration
#pragma pack(1)
struct demo
{
    int i;      //4
    float f;    //4
    char ch;    //1 generates padding
};              //9


int main()
{
    struct demo dobj;
    printf("%d \n",sizeof(dobj)); //9

    return 0;
}