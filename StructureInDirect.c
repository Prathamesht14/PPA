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
    struct demo *ptr = NULL;

    ptr = &dobj;

    ptr->i=11;
    ptr->ch='A';
    ptr->f=10.0f;

    printf("%d\n",ptr->i);
    printf("%c\n",ptr->ch);
    printf("%f\n",ptr->f);
    
    return 0;
}