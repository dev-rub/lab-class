#include<stdio.h>

void main() {
    char n;
    printf("Enter number between 1 to 7::");
    scanf("%d",&n);
    switch (n)
    {     
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
    printf("Not a day");
        break;
    }
}