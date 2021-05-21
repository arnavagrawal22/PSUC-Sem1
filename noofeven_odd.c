#include<stdio.h>

int main()
{
    int i,j,k,l,m,digit;
    scanf("%d",&i);
    int numcopy=i;
    k=0;
    l=0;
    m=0;
    while (numcopy!=0)
    {
        digit= numcopy%10;
        if (digit%2==0)
        {
            l++;        
        }
        else
        {
            m++;
        }
        
        numcopy=numcopy/10;
        k++;
    }
    printf("%d Digits",k);
    printf("%d Even Digits",l);
    printf("%d Odd Digits",m);
   
    
}