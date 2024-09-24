#include<stdio.h>
 void main() {
    int cp,sp;
    printf("Enter cp:");
    scanf("%d",&cp);
    printf("Enter sp:");
    scanf("%d",&sp);
    if(sp == cp)
        printf("0 profit");
    else if(sp > cp)
        printf("Wow you made profit of %d",sp-cp);
    else 
    printf("Alash! You made lose of %d",cp-sp); 
 }