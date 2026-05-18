#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

// weight converter

int main()
{
    // switch statemetns

    int days = 0;

    printf("choose a day 1- 7");
    scanf("%d", &days);
    switch (days)
    {
    case 1:
        printf("its saturday");
        break;
    case 2:
        printf("its sunday");
        break;
    case 3:
        printf("its mon");
        break;
    case 4:
        printf("its tue");
        break;
    case 5:
        printf("its wed");
        break;
    case 6:
        printf("its thur");
        break;
    case 7:
        printf("its frid");
        break;
    default:
        printf("you choose the worng thing mf, r u dumb, hchoose a numb");
    }
    return 0;
}
