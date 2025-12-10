#include <stdio.h>
int main()
{
    float deg, rad;
    // pi radian = 180 degree
    printf("Enter radian value: ");
    scanf("%f", &rad);
    deg = (180 / 3.141) * rad;
    printf("Degree value: %f deg", deg);
}