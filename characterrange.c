#include<stdio.h>

int main()
{
    char a;
    scanf("%c",&a);

    if (a>='a' && a<='z')
    {
            printf("%d is lowercase",a);
        
    }
    else if (a>='A' && a<='Z')
    {
            printf("%d is uppercase",a);
        
    }
    else if (a>='0' && a<='9')
    {
            printf("%d is digit",a);
        
    }
     else
      {
         printf("%d is special",a);
        
      }
          
        
    return(0);
    
}