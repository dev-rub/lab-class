
#include<stdio.h>

void main()
{
    int num,o,rem ,r2,result;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    
        printf("number is %d\n",num);
        o = num % 10;
        rem = (num / 10) %10;
        r2 = (num / 100) %10;
        result = (o * 10 + rem ) * 10 + r2;
        printf("after sifting the digit %d\n",result);
}