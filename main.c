#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    // number guessing game
    srand(time(NULL));
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("NUMBER GUESSING GAME\n ");

    do
    {
        printf("guess a number between %d - %d: ", min, max);
        while (scanf("%d", &guess) != 1)
        {
            printf("invalid input, enter a number: ");
            while (getchar() != '\n');  // flush the input buffer
        }
        tries++;

        if (guess < answer)
        {
            printf("too low try again \n");
        }
        else if (guess > answer)
        {
            printf("too high, try again \n");
        }
        else
        {
            printf("correct");
        }
    } while (guess != answer);

    printf("the answer is: %d\n", answer);
    printf("IT TOOK U %d TRIES: ", tries);
    return 0;
}
