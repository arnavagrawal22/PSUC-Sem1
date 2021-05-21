#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, min, i, flag = 0, b, k, digit, decimal, num;
    scanf("%d", &b);
    i=1;
    k = 0;
    decimal = 0;

    while (b != 0)
    {
        digit = b % 10;

        decimal = decimal + digit * pow(2, k);

        b = b / 10;
        k++;
    }
    printf("%d\n", decimal);

    num = decimal;
    int octal = 0;

    while (num != 0)
    {
        digit = num % 8;

        octal = octal + digit*i;
        i *= 10;
        num = num/8;

    }
    printf("%d",octal);

}
