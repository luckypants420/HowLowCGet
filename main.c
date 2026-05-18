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
        // if(i == 3)
        // {
        //     continue;
        // }

        if (i == 3)
        {
            break;
        }
        Sleep(1000);
        printf("%d \n", i);
    }
    printf("happy new year");
    return 0;
}
