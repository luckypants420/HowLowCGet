#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library


//return statement
int squareNum(int num)
{
    return num * num;
}

int main()
{
    int x = squareNum(2);
    int z = squareNum(4);
    int u = squareNum(54);

    printf("%d \n", x);
    printf(" %d \n", z);
    printf(" %d\n", u);
    //return 0 is an exit code 
    return 0;
}
