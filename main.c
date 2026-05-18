#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

int main()
{
    bool isRunning = true;
    char response = '\0';

    do
    {
        printf("you are playing a game");
        printf("would you like to continue? (Y = Yes / N = No)");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
    } while (isRunning);
    printf("you exist the game");
    return 0;
}
