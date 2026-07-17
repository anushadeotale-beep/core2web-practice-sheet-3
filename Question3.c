#include<stdio.h>
int main()
{
    int year;
    printf("enter year:");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
        printf("this is leap year:%d",year);
    }
    else{
        printf("not leap year");
    }
    return 0;
}