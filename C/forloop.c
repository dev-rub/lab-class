#include<stdio.h>

int main(){
    int r,sum=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Size of n:: \n",sizeof(n));
    for(int i=1; i<=sizeof(n); i++){
        r = n%10;
        sum +=r;
        n /=10;
    }
    printf("Sum=%d",sum);
}