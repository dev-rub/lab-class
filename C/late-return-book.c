#include<stdio.h>

void main() {
    int d;
    printf("Enter Number of day when you returning the book::");
    scanf("%d",&d);
    if(d == 5)
        printf("You need to pay 50 paisa\n");
    else if (d>=6 && d<=10)
        printf("You need to pay 1 rupee\n");
    else if (d>10 && d<30 )
        printf("You need to pay 5 rupee\n");
    else if (d>30)
        printf("Your membership is cancel\n");

    else 
        printf("return Okk");
}