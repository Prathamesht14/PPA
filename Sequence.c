#include<stdio.h>

int main()
{
    int no1 = 0, no2 = 0, ans = 0;

    printf("\n Enter 1st number: ");
    scanf("%d",&no1);

    printf("\n Enter 2nd number: ");
    scanf("%d",&no2);

    ans = no1 + no2;
    printf("\n Answer is :%d",ans);
    return 0;
}