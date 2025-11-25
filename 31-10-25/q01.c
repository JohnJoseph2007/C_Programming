// WAP to find the area of a circle using pointers

#include <stdio.h>
int main()
{
    float pi = 3.141, r, area, *rp, *ap;
    rp = &r;
    ap = &area;
    printf("Enter radius: ");
    scanf("%f", rp);
    *ap = pi * (*rp) * (*rp);
    printf("Area of circle: %f\n", *ap);
}