#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <windows.h>
int main()
{
    // for loops = repeat code with a condition ( initilize; condition; update)
    // for loops are better used for a specific amount of time and while is for continuoius

    for (int i = 5; i >= 0; i--)
    {
        Sleep(1000);
        printf("%d \n", i);
        for (int j = 1; j < 10; j++)
        {
            Sleep(1000);
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
