#include <stdio.h>

int main()
{
    int n1, n2, min, i, flag = 0,gcd;
    scanf("%d", &n1);
    scanf("%d", &n2);
    min = (n1 < n2) ? n1 : n2;
    i = 1;
    while (i < min+1)
    {
        flag=0;
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd=i;
        }

        i++;

    }

    printf("%d",gcd);
    
    
}
