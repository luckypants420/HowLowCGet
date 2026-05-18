#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int min = 1;
    int max = 6;
    // psudo random numbers
    int randomNum = (rand() % (max - min + 1)) + min;
    printf("%d", randomNum);
    return 0;
}
