#include <stdio.h>

int main()
{
    int i, j, k;
    scanf("%d", &i);
    j = 1;
    k=0;
    while (j < i)
    {
        if (i % j == 0)
        {
            k = 1;
            break;
        }
        
        j++;
    }

    if (k == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not");
    }
    
}
