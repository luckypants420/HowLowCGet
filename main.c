#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

//global variables should be used for consts pretty much

int add(int x, int y)
{

    int result = x + y;
    return result;
}

int subtract(int x, int y)
{
    int result = x - y;
    return result;
}

int main()
{

    int x = 3;
    int y = 8;
    int result = add(8, 3);
    int result2 = subtract(x, y);
    printf("%d", result2);
    return 0;
}
