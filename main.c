#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

// compund interest calculator

int main()
{

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("compund interests calculator\n ");

    printf("enter the principal (p): ");
    scanf("%lf", &principal);

    printf("enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("enter the # of years (t): ");
    scanf("%d", &years);

    printf("enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate/timesCompounded, timesCompounded * years);

    printf("after %d years, the total will be $%.2lf", years, total);
    return 0;
}
