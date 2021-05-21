#include <stdio.h>

int main()
{
    int i, j, k, l;
    scanf("%d", &i);
    j = 1;
    k = 0;
    l=2;

    while (l < i)
    {
        j=2;
        k=0;
        while (j < l)
        {
            if (l % j == 0)
            {
                k = 1;
                break;
            }

            j++;
        }

        if (k == 0)
        {
            printf("%d\t",l);
        }

        l++;
    }
}
