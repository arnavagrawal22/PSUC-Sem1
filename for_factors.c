#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++)
    {
        if (n%i==0)
        {
            printf("%d\t",i);
        }
        
    }
}