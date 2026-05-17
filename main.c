#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type

// entry point for the program
// expects an integer to return
int main()
{
    /*
    variable = reusable container for value
    int = integer 4 bytes

    float = decimal with floating point number with normal behavior of six digits shown on the right 4 bytes

    double is used for decimals with more precision for the numbers repreesnted with 15 to 16 digits after decimal 8 bytes

    char is to store characters 1 byte

    no strings in C but an array of chars size varies on length
    this is where C is a bitch and shows how low level it is , this mf is not playing around, lowkey nice :)
    boolean is either false or true, binary 1 byte and requires <stdbool.h>
    */

    int age = 27;
    int year = 1998;
    printf("hey dhari, welcome to C language have fun mf \n you are %d years old:", age);
    printf("\nborn in year: %d", year);

    float gpa = 8.3;
    float price = 9.99;
    printf("\nyour gpa is %f:", gpa);
    printf("\nthe price of that toy is: %.2f$", price);

    double pi = 3.14;
    printf("\nthe number pi is: %.15f", pi);

    char grade = 'A';
    printf("\n ypur grade is: %c", grade);

    char name[] = "Dhari aka Neo";
    char email[] = "dhari@gmail.come";
    printf("\n your full name is: %s", name);
    printf("\n your email is: %s", email);

    bool isOnline = true;
    bool isAFK = false;
    // i can use %d to represent it in 1 or 0 as in true or false
    printf("\n your friend is online? %d", isOnline);
    printf("\n your friend is playing? %d", isAFK);

    if (isOnline)
    {
        printf("\n i checked and your firend i online");
    }
    else
    {
        printf("\n nah that mf is not online");
    }

    /*
    Arithmatic
    + , - *, ++, --, % for the remainder

    x+=2
    x-=2
    x*=2
    x/=2
    
    */

    int x = 1;
    int z = 5;
    int k = 3;

    float rslt = x * z + k;
    printf("the resutl of x * z + k= %f", rslt);
    return 0;
}
