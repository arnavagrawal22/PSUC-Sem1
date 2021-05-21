#include<stdio.h>
#include<math.h>

int main()
{
    int i,num,digit,k;
    scanf("%d",&i);
    int numcopy=i;
    k=0;
    num=0;
    while (numcopy!=0)
    {
    
        digit=0;
        digit= numcopy%10;

        num= num+(digit*pow(2,k)) ;   
        
        numcopy=numcopy/10;
        k++;
    }
    printf("%d ",num);
     
}