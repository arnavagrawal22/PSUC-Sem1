#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d", &i);
    j = 1;
    while (j < i)
    {
        if (i % j == 0)
        {
            printf("%d\n", j);
        }

        j++;
    }
}