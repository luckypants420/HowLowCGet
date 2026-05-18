#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

void happyBirthday(char name[], int age)
{
    printf("\n happy birthday to u ");
    printf("\n happy birthday to u ");
    printf("\n happy birthday dear %s ", name);
    printf("\n happy birthday to u ");
    printf("\n you are %d years old \n", age);
}

int main()
{
    // funcitons = a reusable code that can be invoked "called" DRY, dont repeat yourself babe
    char name[30] = "dhari";
    int age = 15;
    happyBirthday(name, age);

    happyBirthday(name, age);

    happyBirthday(name, age);

    return 0;
}
