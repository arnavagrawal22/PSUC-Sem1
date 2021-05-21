#include<stdio.h>
#include <math.h>

int main()
{
    int a,b,c,smallest;
    float d,root,img;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Given Equation is (%d)X^2 + (%d)X + (%d)\n",a,b,c);
    img=0;
    root=0;

    /* Finding D */
    d= b*b-4*a*c;
    printf("D is %f\n",d);

    if (d==0)
    {
     root = (float)-b/(2*a);
     printf("Real and equal root is %f\n",root);
    }

    if (d<0)
    {
     root = (float)(-b)/(2*a);
     img= (float)(sqrt(-d))/(2*a);
     printf("Imaginary root is %f + %fi and its conjuagte\n",root,img);
    }

    if (d>0)
    {
     root = (float)(-b)/(2*a);
     img= (float)(sqrt(d))/(2*a);
     printf("Imaginary root is %f + %f and its conjuagte\n",root,img);
    }

}
