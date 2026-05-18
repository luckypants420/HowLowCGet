#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library

/*function prototypes = its how we provide compiler with a funcitons name,
 paramters, and retyrn type before acutally defning the function,
 this helps with readability and organization and prevent errors

 */
void hello(char name[], int age);
bool isAlive(int age);

int main()
{

    hello("dhari", 32);
    if (isAlive(43))
    {
        printf("yeah\n ");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}

bool isAlive(int age)
{

    return age >= 16;
}

void hello(char name[], int age)
{
    printf("hello %s \n", name);
    printf("you are %d years old", age);
}