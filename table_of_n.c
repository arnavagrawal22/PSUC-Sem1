#include <stdio.h>

int main()
{
    int i, n,k, sum = 1;
    scanf("%d %d", &n,&k);
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < k + 1; j++)
        {
            printf("%d X %d = %d \n", i, j, i * j);
        }
}
