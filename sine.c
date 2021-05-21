#include <stdio.h>

int main()
{
    int i, n;
    float x;
    scanf("%d", &n);
    scanf("%f", &x);
    float term = x;
    float sum = x;
    printf("%f  +\t", term);
    for (i = 1; i < n; i++) //compute & sum for second term onwards
    {
        term = (float)(term * (((-1) * x * x) / (2 * i * (2 * i + 1))));
        sum += term;
        printf("(%f) + \t", term);
    }
    if (i == (n))
    {
        printf("\n");
    }

    printf("%f\t", sum);
}
