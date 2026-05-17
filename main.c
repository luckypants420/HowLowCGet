#include <stdio.h> // library for input and output

// entry point for the program
// expects an integer to return
int main()
{
    /*
    variable = reusable container for value
    int = integer
    float = decimal with floating point number with normal behavior of six digits shown on the right
    */

    int age = 27;
    int year = 1998;
    float gpa = 8.3;
    float price = 9.99;
    printf("hey dhari, welcome to C language have fun mf \n you are %d years old:", age);
    printf("\nborn in year: %d", year);
    printf("your gpa is %f:", gpa);
    printf("the price of that toy is %.2f $:", price );
    
    return 0;
}
