#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, theta;
    printf("Enter 'r' and theta values\n");
    scanf("%f%f", &r, &theta);
    x = r * cos(theta);
    y = r * sin(theta);
    printf("Cartesian coordinates: (%f, %f)", x, y);
}
