#include<stdio.h>
void area(float*, float*);
int main() {
	float r, *rad, a, *ar;
	rad = &r;
	ar= &a;
	printf("Enter a radius: ");
	scanf("%f", rad);
	area(rad, ar);
	printf("Area = %f", *ar);
}
void area(float *x, float *a) {
	float pi=3.141;
	*a = pi**x**x;
}
