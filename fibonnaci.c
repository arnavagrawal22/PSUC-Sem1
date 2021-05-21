#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int f, s, p;
    int i;
    i = 1;
    f = 0;
    s = 1;
    p = 0;
    while (i < n) //Loop for series
    {
        printf("%d\t", s);

        p = f + s;
        f = s;
        s = p;

        i++;
    }
}