#include<stdio.h>

int main()
{
    int a,b,c,smallest;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a < b)
        { 
        if (a < c)
            {
                smallest = a; 
            }
        else
            { 
                smallest = c; 
            }
        }
    else
        {
        if (b < c)
            { smallest = b; }
        else
            { smallest = c; }
        }

    printf("Smallest is %d",smallest);
    return 0;
}
