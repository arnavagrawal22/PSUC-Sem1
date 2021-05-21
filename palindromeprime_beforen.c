#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, numcopy, newnum, d,flag;
    scanf("%d", &n);
    j = 2;
    while (j < n + 1)
    {

        numcopy = j;
        newnum = 0;
        while (numcopy != 0)
        {
            d = numcopy % 10;

            newnum = newnum * 10 + d;

            numcopy /= 10;
        }

        i = 2;
        flag=0;
        while (i < j)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }

            i++;
        }

        if (newnum == j && flag!=1)
        {
            printf("%d\t", j);
        }
        j++;
    }
}
