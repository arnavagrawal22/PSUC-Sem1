#include <stdio.h>
#include <math.h>
int main()
{
    int n, numcopy, d, digit;
    scanf("%d", &n);
    
    for (int i = 1; i < n + 1; i++)
    {
        d = 0;
        numcopy = i;
        while (numcopy != 0)
        {
            numcopy /= 10;
            d++;
        }
        numcopy = i;
        int newnum = 0;
        while (numcopy != 0)
        {
            digit = numcopy % 10;

            newnum = newnum + pow(digit, d);

            numcopy /= 10;
        }

        if (i == newnum)
        {
            printf("%d\n", i);
        }
    }
}