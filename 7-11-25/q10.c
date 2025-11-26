// WAP (using call-by-reference function area_peri) to
#include <stdio.h>
#include <math.h>
void area_peri(int *, int *, int *, int *, float *);
int main()
{
    int s1, s2, s3, peri, *p1, *p2, *p3, *pp;
    float area, *pa;
    p1 = &s1;
    p2 = &s2;
    p3 = &s3;
    pp = &peri;
    pa = &area;
    printf("Enter sides of triangle:\n");
    scanf("%d%d%d", p1, p2, p3);
    area_peri(p1, p2, p3, pp, pa);
    printf("Perimeter = %d\n", *pp);
    printf("Area = %f\n", *pa);
}

void area_peri(int *s1, int *s2, int *s3, int *perimeter, float *area)
{
    float s;
    *perimeter = (*s1) + (*s2) + (*s3);
    s = (*perimeter) / 2.0;
    *area = sqrt(s * (s - (*s1)) * (s - (*s2)) * (s - (*s3)));
}