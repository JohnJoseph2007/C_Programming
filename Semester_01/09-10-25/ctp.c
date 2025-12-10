#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, theta;
    printf("Enter x,y coordinates\n");
    scanf("%f%f", &x, &y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = y / x;
    printf("Polar coordinates: (%f, %f)", r, theta);
}
