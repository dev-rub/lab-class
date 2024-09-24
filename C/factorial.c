#include<stdio.h>
 void main() {
    int a,f=1 ,i=1;
    printf("Enter a Number to chek fact::");
    scanf("%d",&a);
    while (i<= a)
    {
        f *= i;
        i++;
    }
    printf("Factorial of %d is %d",a,f);
    
 }