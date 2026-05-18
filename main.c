#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

//weight converter 

int main()
{
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("weight conversion calculator\n");
    printf("1. kilograms in pounds\n ");
    printf("2. pounds to kilograms\n ");
    printf("enter your choice\n ");

    scanf("%d", &choice);
    if (choice == 1)
    {
        // kilograms to pounds
        printf("enter the weight in kilograms\n");

        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if (choice == 2)
    {
        // pounds to kilograms
        printf("enter the weight in pounds\n");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else
    {
        printf("invalid choice, please enter 1 or 2\n");
    }

    return 0;
}
