#include <stdio.h>

int main()
{
    int i, n, flag = 1;
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}
