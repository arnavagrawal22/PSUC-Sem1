#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        int flag = 1;
        for (int k = 2; k < i; k++)
        {

            if (i % k == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag != 0)
        {
            printf("%d\t",i);
        }
        
    }
}
