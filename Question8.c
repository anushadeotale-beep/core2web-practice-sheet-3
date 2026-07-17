#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter number:");
    scanf("%d",&a);
    printf("enter number:");
     scanf("%d",&b);
      printf("enter number:");
        scanf("%d",&c);
        if ((a*a) + (b*b) == c*c)
        {
           printf("its pythagorean triplet");
        }
        else{
            printf("not a pythagorean triplet");
        }
        return 0;

}