#include<stdio.h>

int main()
{
    int i,j,k;
    scanf("%d",&i);
    int numcopy=i;
    k=0;
    while (numcopy!=0)
    {
        numcopy=numcopy/10;
        k++;
    }
    printf("%d",k);
   
    
}