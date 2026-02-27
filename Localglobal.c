#include<stdio.h>

int no = 11;    //Global variable (data)

void fun()
{
    int i = 51; //Local Variable (Stack)
    printf("INside Fun :%d\n",i); //51
    printf("INside Fun :%d\n",no); //11
}

int main()
{
    int i = 21;     //local variable (stack section)

    printf("INside main :%d\n",i); //21
    printf("INside main :%d\n",no); //11

    fun();

    return 0;
}