#include<stdio.h>
 void main() {
    int mark;
    printf("Enter your makr::");
    scanf("%d",&mark);
    if(mark <=40 )
        printf("fail");
    else if (mark >= 40 && mark <=50 )
        printf("C");
    else if (mark >= 50 && mark <= 60)
        printf("B");
    else if (mark >= 60 && mark <= 70)
        printf("A");
    else if (mark >=70 && mark <= 80)
        printf("A+");
    else if (mark >= 80 && mark <=90 )
        printf("A++");
         }