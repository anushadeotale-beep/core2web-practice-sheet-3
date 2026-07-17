#include<stdio.h>
int main()
{
    char vowle;
    printf("enter value:");
    scanf("%c",&vowle);
    

     if( vowle=='a'||vowle=='e'||
        vowle=='i'|| vowle=='o'||
        vowle=='u'|| vowle=='l'||
        vowle=='A'||vowle=='E'||
        vowle=='I'||vowle=='O'||
        vowle=='U'||vowle=='L' )
     {
        printf("its an vowle:%c",vowle);


     }
     else{
        printf("consonent");


     }
     return 0;
}