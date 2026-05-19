#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <time.h>
#include <stdlib.h>

// rock, paper, scissors

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main()
{
    srand(time(NULL));

    printf("ROCK, PAPER, SCISSORS GAME MF! \n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("you chose ROCK! \n");
        break;
    case 2:
        printf("you chose PAPER! \n");
        break;
    case 3:
        printf("you chose SCISSORS! \n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("CPU chose ROCK! \n");
        break;
    case 2:
        printf("CPU chose PAPER! \n");
        break;
    case 3:
        printf("CPU chose SCISSORS! \n");
        break;
    }

    checkWinner(userChoice, computerChoice);
    return 0;
}
int getComputerChoice()
{
    return (rand() % 3) + 1;
}
int getUserChoice()
{

    int choice = 0;
    do
    {
        printf("choice an option\n");
        printf("1.ROCK\n");
        printf("2.PAPER\n");
        printf("3.SCISSORS\n");
        printf("Enter your choice:\n ");
        while (scanf("%d", &choice) != 1)
        {
            printf("invalid input, enter a number: ");
            while (getchar() != '\n')
                ;
        }
    } while (choice < 1 || choice > 3);
    return choice;
}
void checkWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        printf("its a TIE!");
    }
    else if (userChoice == 1 && computerChoice == 3)
    {
        printf("you WIN!");
    }
    else if (userChoice == 2 && computerChoice == 1)
    {
        printf("you WIN!");
    }
    else if (userChoice == 3 && computerChoice == 2)
    {
        printf("you WIN!");
    }
    else
    {
        printf("you LOSE!");
    }
}
