#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <windows.h>

// break to stop a loopo
//  continue to skip current cycle of loop
int main()
{
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("enter the # of rows: ");
    scanf("%d", &rows);

    printf("enter the # of columns: ");
    scanf("%d", &columns);

    printf("enter the symbol you wnat to print: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < rows; i++)
    {
        for (int i = 0; i < columns; i++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}
