#include <stdio.h>

int main()
{
    int a = 2938434;
    char *b = &a;

    printf("%d\t %c\t", *b, *b);
}