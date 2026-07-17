#include<stdio.h>
int main()
{
    int sellingprice;
    int costprice;
    int profit,loss;
    printf("enter costprice:");
    scanf("%d",&costprice);
    printf("enter sellingprice");
    scanf("%d",&sellingprice);
    if(sellingprice>costprice){
       profit= sellingprice - costprice;
       printf("profit by %d",profit);
    }
     else if (sellingprice<costprice)
     {
         loss =  costprice-sellingprice ;
           printf("loss by %d",loss);
     }
     else{
        printf("no profit no loss");
     }
     return 0;
}