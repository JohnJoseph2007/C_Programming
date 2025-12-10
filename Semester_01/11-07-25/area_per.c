#include<stdio.h>
#include<math.h>
void area_peri(float*, float*, float*, float*, float*);
int main()
{
	float a,b,c,*as,*bs,*cs, area, *ar, perimeter, *peri;
	as=&a; bs=&b; cs=&c; ar=&area; peri=&perimeter;
	printf("Enter 3 sides of a triangle:\n");
	scanf("%f%f%f", as, bs, cs);
	area_peri(as, bs, cs, ar, peri);
	printf("Area = %f\n", *ar);
	printf("Perimeter = %f\n", *peri);
}
void area_peri(float *a, float *b, float *c, float *area, float *perim)
{
	float s;
	s = (*a+*b+*c)/2;
	*area = sqrt(s*(s-*a)*(s-*b)*(s-*c));
	*perim = *a+*b+*c;
}
