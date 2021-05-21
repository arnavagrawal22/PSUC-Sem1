#include<stdio.h>

int main()
{
    int i,j,rdigit;
    scanf("%d",&i);
    int numcopy=i;
    int newdig=0;
    j=0;
    while (numcopy!=0)
    {
        rdigit=0;
        rdigit=numcopy%10;
        newdig= newdig*10 + rdigit;
        numcopy=numcopy/10;

    }
    printf("%d",newdig);
    if (i==newdig)
    {
        printf("Palindrome");
    }
    
    
}