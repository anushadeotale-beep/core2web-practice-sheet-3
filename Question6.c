#include<stdio.h>
int main()
{
    int percentage;
    printf("enter percentage:");
    scanf("%d",&percentage);
    if(percentage>85){
        printf("medical");
    }
    else if(percentage<=85 && percentage>75){
        printf("enginerring");
    }
    else if(percentage<=75&&percentage>=65){
        printf("pharmacy");
    }
    else{
        printf("arts");
    }
    return 0;
}