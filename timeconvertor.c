#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h,m,s;

    h= a/3600;
    m= (a % 3600)/60;
    s= (a % 3600) % 60;
    

   
    printf("%d\n",h);
    printf("%d\n",m);
    printf("%d\n1",s);
}