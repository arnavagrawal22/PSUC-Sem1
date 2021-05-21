#include <stdio.h>

int main()
{
    int i, n, last, num;
    scanf("%d", &num);
    i = 0;

    last = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }

    printf("%d\t", last);
    printf("%d\t", num);
}
