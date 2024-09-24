#include <stdio.h>

int starpattern(int a){

int i=0, j=0;
}

int booleanpattern(int a){

}

int letterpattern(int a){

}

void main()
{
    int a = 5;
    for (int i = 65; i < a + 65; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
    char b = 'a';
    printf("ascii of %c is %d", b, b);
}