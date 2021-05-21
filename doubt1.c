#include <stdio.h>

int main()
{

    int a = 678;

    printf("%6d\n", a);
    printf("%0.6d\n", a);
    printf("%0.06d\n", a);
    printf("%0.006d\n", a);
    printf("%-0.06d\n", a);

    return 0;
}