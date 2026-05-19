#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <time.h>
#include <stdlib.h>

// c doesnt automoaticlly clear memory of already been used variables
int main()
{

    // arrays

    int scores[5] = {0};

    int size = sizeof(scores) / sizeof(scores[0]);
    for (int i = 0; i < size; i++)
    {
        printf("enter a score: ");
        scanf("%d", &scores[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", scores[i]);
    }
    return 0.0;
}