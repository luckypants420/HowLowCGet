#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <time.h>
#include <stdlib.h>

//^ XOR is where one of the bits must have a 1 to output a 1 otherwise its all 0
// | OR operator if either is 1 then output is 1
//& AND operator is if 2 bits are 1's then it outputs it, otherwise its 0
//~ operator this is ones complemnt and this inverts a binary number where 0's become  1 and 1's become 0's

int decimalToBinary(int x);
int binaryToDecimal(int x);
void printBinaryBase2Nums();

int main()
{
    printBinaryBase2Nums();
    int x = 11111111;
    unsigned int y = 255;

    decimalToBinary(y);
    printf("\n the decimal in that binary is: %d", y);

    int b2d = binaryToDecimal(x);
    printf("\n binary to decimal is : %d", b2d);
    return 0.0;
}

void printBinaryBase2Nums()
{

    printf("binary numbers representation in base 2\n");
    for (int i = 0; i < 8; i++)
    {
        int base2Nums = pow(2, i);
        printf("%d     ", base2Nums);
    }

    printf("\n");
}

int decimalToBinary(int x)
{
    // array to store binary number
    int binaryNumber[8];

    // counter for binary array
    int i = 0;
    while (x > 0)
    {
        // storing remainder in array
        binaryNumber[i] = x % 2;
        x = x / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d     ", binaryNumber[j]);
    }
}

int binaryToDecimal(int x)
{
    int dec = 0;

    // initialize base value to 1 i'e 2^0

    int base = 1;

    // extract each digit of binary number
    //  and then adding corresponding exponsnet of 2
    while (x)
    {
        int last_digit = x % 10;
        x = x / 10;

        // multiply the last digit with the base value
        // then adding it to the decimal value
        dec += last_digit * base;

        // updating the base value by multiplying it by 2
        base = base * 2;
    }
    return dec;
}