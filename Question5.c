#include<stdio.h>
int main()
{
    int units,bills;
    printf("enter units consumed:");
    scanf("%d",&units);
    if (units<=100){
       bills = units*5;

    }
    else if(units<=300)
    {
        bills = (100*5) +((units -100)*7) ;

    }
else{
    bills=(100*5)+200*7+(units-300)*7;

}
   printf("Total Electricity Bill = %d\n", bills);
   return 0;
}