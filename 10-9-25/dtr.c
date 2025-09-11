#include<stdio.h>
int main()
{
    float deg, rad;
    // pi radian = 180 degree
    printf("Enter degree value: ");
    scanf("%f", &deg);
    rad = (3.141/180)*deg;
    printf("Radian value: %f rad", rad);
}