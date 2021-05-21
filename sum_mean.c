#include<stdio.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    int sum=0;
    j=0;
    while (j<i+1)
    {
        sum=sum+j;
        j++;
    }

    printf("%d",sum);
    
}