#include <stdio.h>   // library for input and output
#include <stdbool.h> // library for boolean type
#include <string.h>  //library for strings
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    double surfaceArea = 0.0;
    double volume = 0.0;

    printf("enter a radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.3 / 3.0) * PI * pow(radius, 3);

    // 2d cirlce
    printf("Area of circle is: %.2lf\n", area);
    // 3d cphere
    printf("surface Area is: %.2lf \n", surfaceArea);

    printf("Volume is: %.2lf \n", volume);
    return 0;
}
