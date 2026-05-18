#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

int main()
{
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double rslt = 0.0;

    printf("enter the value of num1; \n");
    scanf("%lf", &num1);

    printf("enter the operator; \n");
    scanf(" %c", &operator);

    printf("enter the value of num2; \n");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        rslt = num1 + num2;
        break;
    case '-':
        rslt = num1 - num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("you cannot divide by 0 \n");
        }
        else
        {
            rslt = num1 / num2;
        }
        break;
    case '*':
        rslt = num1 * num2;
        break;
    default:
        printf("invalid input dummy");
    }
    printf("%lf", rslt);
    return 0;
}
