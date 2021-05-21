#include <stdio.h>
#include <math.h>

int main()
{
    int n, j, num, digit;
    scanf("%d", &n);
    int numcopy;
    num = 0;
    j = 0;
    while (j < n + 1)
    {
        numcopy = j;
        while (numcopy != 0)
        {
            digit = 0;
            digit = numcopy % 10;

            num = num + pow(digit, 3);

            numcopy = numcopy / 10;
        }

        if (num == j)
        {
            printf("%d is an armstrong number\n", num);
        }

        num = 0;

        j++;
    }
}