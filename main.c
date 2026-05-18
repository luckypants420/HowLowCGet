#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

// compund interest calculator

int main()
{

    int age = 0;
    bool isStudent = true;
    char name[50] = "";

    printf("enter your name ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    if (strlen(name) == 0)
    {
        printf("you didnt enter your name\n");
    }
    else
    {
        printf("hello %s\n", name);
    }

    printf("enter your age mf: ");
    scanf("%d", &age);
    if (age >= 18 && isStudent)
    {
        printf("you are an adult and you are a student");
    }
    else if (age <= 0)
    {
        printf("buddy is not even born yet");
    }
    else
    {
        printf("you are a child buddy");
    }
    return 0;
}
