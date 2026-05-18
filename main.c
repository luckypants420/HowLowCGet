#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

int main()
{
    float price = 10.0;
    bool isStudent = true; // 10% discount
    bool isSenior = true;  // 20% discount

    if (isStudent)
    {
        if (isSenior)
        {
            printf("you get a studnet discount of 10% \n");
            printf("you get a senior discount of 20% \n");
            price *= 0.7;
        }
        else
        {
            printf("you get a studnet discount of 10% \n");
            price *= 0.9;
        }
    }
    else
    {
        if (isSenior)
        {
            printf("you get a senior discoutn of 20% \n");
            price *= 0.8;
        }
    }
    printf("the price of ticket is: $%.2f \n", price);

    return 0;
}
