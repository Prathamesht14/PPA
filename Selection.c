#include<stdio.h>

int main()
{

    int no = 0;

    printf("\n Enter number: ");
    scanf("%d",&no);

    if(no % 2 == 0)
    {
        printf("\n Its an Even Number");
    }
    else
    {
        printf("\n Its an Odd Number");
    }

    return 0;
}