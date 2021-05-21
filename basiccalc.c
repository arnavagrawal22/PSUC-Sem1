#include<stdio.h>

int main()
{
    int a,b;
    float div;
    int add,sub,mul;
    scanf("%d",&a);
    scanf("%d",&b);

    add= a+b;
    sub= a-b;
    mul= a*b;
    div= (float)a/b;

    printf("%d\n",add);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%f\n",div);

}
    

