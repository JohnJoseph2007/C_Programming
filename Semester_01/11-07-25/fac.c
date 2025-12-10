#include<stdio.h>
void fac(int*,int*);
int main() {
	int n, fact, *np, *fp;
	np=&n; fp=&fact;
	printf("Enter a number: ");
	scanf("%d", np);
	fac(np, fp);
	printf("Factorial of %d is %d\n", *np, *fp);
}
void fac(int *x, int *f) {
	int temp=*x;
	*f = 1;
	while(temp>0) {
		*f*=temp;
		temp--;
	}
}
