#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

// compund interest calculator

int main()
{

    int age = 0;

    printf("enter your age mf: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you are an adult");
    }
    else if (age <= 0)
    {
        printf("buddy is not even born yet");
    }
    else
    {
        printf("you are a child buddy");
    }
    return 0;
}
