//write a program to find maximmun between two distinct numbers
#include<stdio.h>
int main()
{
    int  num1,num2;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    if (num1<num2){
        printf(" is maximum number:%d",num2);
    }
    else if(num1>num2) 
    {
        printf(" is maximum number:%d",num1);
    }
    else{
        printf("both are same");
    }
    return 0;
}
