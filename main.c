#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>    //math library
#include <windows.h>

// break to stop a loopo
//  continue to skip current cycle of loop
int main()
{

    for (int i = 5; i >= 0; i--)
    {
        printf("%d\n", i);

        for (int j = 0; j < 10; j++)
        {
            Sleep(500);
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
