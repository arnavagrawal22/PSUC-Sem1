#include <stdio.h>
int main(void)
{
    float value1, value2;
    char operator;
    float result;
    result=0;
    printf("Type in your expression.\n");
    scanf("%f %c %f",&value1, &operator, & value2);
    switch (operator)
    {
    case '+':
        result = value1 + value2;
        printf("%f", result);
        break;
    case '-':
        result = value1 - value2;
        printf("%f", result);
        break;
    case '*':
        result = value1 * value2;
        printf("%f", result);
        break;
    case '/':
        if (value2 == 0)
            printf("Division by zero.\n");
        else
            result = value1 / value2;
        printf("%f", result);
        break;
    default:
        printf("Unknown Operator");
    }
    return 0;
}
