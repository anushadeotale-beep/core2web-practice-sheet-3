//write a program to check weather the given number is in the range of 1 to 1000 or not
#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf(" %d",&num);
   if(num>=1 && num<=1000){
    printf("the number is in the range");

   }
   else{
    printf("the number is not in the range");
   }
   return 0;
}