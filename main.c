#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <time.h>
#include <stdlib.h>

int main()
{

    // arrays

    int numbers[] = {10, 20, 30, 40, 50};

    //this gives me the length of the array becuase we are dividing the amount of bytes 
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }
    return 0.0;
}