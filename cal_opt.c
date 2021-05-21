#include<stdio.h>

int main()
{
    float a,b;
    float div;
    float add,sub,mul;
    char c;

    scanf("%f %c %f", &a, &c, &b);

    printf("%c\n",c);
    printf("%f\n",a);
    printf("%f\n",b);
    
    if (c=='+')
    {
        add= a+b;
        printf("%f\n",add);
    }
    else if (c=='-')
    {
        sub= a-b;
        printf("%f\n",sub);
    }
    else if (c=='*')
    {
        mul= a*b;
        printf("%f\n",mul);
    }
    else if (c=='/')
    {
        div= a/b;
         printf("%f\n",div);
    }
    else
    {
        printf("Unknown Operator");
    }

}