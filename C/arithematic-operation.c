#include<stdio.h>

void main() {
    int a ,b;
    char c;
    printf("Enter two number to do operation::");
    scanf("%d %d",&a,&b); 
    printf("Enter any arithemetic operator:(+,-,/,*)" );
    scanf("%c", c);
    switch (c)
    {     
    case '+':
        printf("Sum=%d",a+b);
        break;
    case '-':
        printf("sub=%d", a> b ? a - b  : b - a);
        break;
    case '*':
        printf("mul=%d",a*b);
        break;
    case '/':
        printf("div=%d",a/b);
        break;
    default:
    printf("not a valid operator");
        break;
    }
}