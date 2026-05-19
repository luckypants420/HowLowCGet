#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <time.h>
#include <stdlib.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{
    // banking program
    int choice = 0;
    float balance = 0.0f;

    printf("WELCOME TO THE BANK!\n");

    do
    {
        printf("\nSelect an option: \n");
        printf("1.Check Balance \n");
        printf("2.Deposit Money \n");
        printf("3.Withdraw Money \n");
        printf("4.Exit \n");
        printf("Enter your choice");
        while (scanf("%d", &choice) != 1)
        {
            printf("\n*** invalid input, please select 1 - 4 *** \n");
            while (getchar() != '\n')
                ;
        }

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            break;
        case 3:
            balance = balance - withdraw(balance);
            break;
        case 4:
            printf("\nthank you for using the bank, GOODBYE!\n");
            break;
        default:
            printf("\n*** invalid input, please select 1 - 4 *** \n");
        }

    } while (choice != 4);
    return 0;
}

void checkBalance(float balance)
{
    printf("\n your current balance is: $%.2f \n", balance);
}
float deposit()
{
    float amount = 0.0f;
    printf("\n enter amount to deposit: $");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("invalid amount \n");
        return 0.0f;
    }
    else
    {
        printf("successfykky deposited $%.2f\n", amount);
    }

    return amount;
}
float withdraw(float balance)
{
    float amount = 0.0f;
    printf("\n enter amount to withdraw:  $");
    scanf("%f", &amount);
    if (amount < 0)
    {
        printf("invalid amount \n");
    }
    else if (amount > balance)
    {
        printf("insufficient funds! your balance is %.2f", balance);
        return 0.0f;
    }
    else
    {
        printf("successffyly withrederew $%.2f", amount);
        return amount;
    }
    return 0.0;
}