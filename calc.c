// This is my Calculator Simple one.
#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nSelect the Operator (*, /, +, -): ");
    scanf("%c", &operator);

    printf("\nEnter Number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter Number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
        case '*':
        result = num1 * num2;
        printf("\nThe Result for %.2lf X %.2lf = %.2lf", num1,num2,result);
        break;
        case '/':
        result = num1 / num2;
        printf("\nThe Result for %.2lf / %.2lf = %.2lf", num1,num2,result);
        break;
        case '+':
        result = num1 + num2;
        printf("\nThe Result for %.2lf + %.2lf = %.2lf", num1,num2,result);
        break;
        case '-':
        result = num1 - num2;
        printf("\nThe Result for %.2lf - %.2lf = %.2lf", num1,num2,result);
        break;

     default:
     printf("%c Is not a Valid Operator!", operator);
    }

    return 0;
}

// Follow me on Instagram @Japhry_