// WAP to find the area of a circle using call-by-reference

#include <stdio.h>
void area(float *, float *);
int main()
{
    float pi = 3.141, r, ar, *rp, *ap;
    rp = &r;
    ap = &ar;
    printf("Enter radius: ");
    scanf("%f", rp);
    area(rp, ap);
    printf("Area of circle: %f\n", *ap);
}

void area(float *r, float *area)
{
    float pi = 3.141;
    *area = pi * (*r) * (*r);
}