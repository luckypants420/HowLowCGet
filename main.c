#include <stdio.h> // library for input and output

// entry point for the program
// expects an integer to return
int main()
{
    /*
    variable = reusable container for value
    int = integer
    float = decimal with floating point number with normal behavior of six digits shown on the right
    double is used for decimals with more precision for the numbers repreesnted with 15 to 16 digits after decimal
    char is to store characters
    */

    int age = 27;
    int year = 1998;

    float gpa = 8.3;
    float price = 9.99;

    double pi = 3.14;

    char grade = 'A';
    printf("hey dhari, welcome to C language have fun mf \n you are %d years old:", age);
    printf("\nborn in year: %d", year);
    
    printf("\nyour gpa is %f:", gpa);
    printf("\nthe price of that toy is: %.2f$", price);

    printf("\nthe number pi is: %.15f", pi);
    printf("\n ypur grade is: %c", grade);
    return 0;
}
