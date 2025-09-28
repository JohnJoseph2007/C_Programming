//WAP to find the Greatest Common Divisor among two input numbers

#include<stdio.h>
int main()
{
	int n1, n2, min, c=0, gcd=1;
	printf("Enter 2 numbers:\n");
	scanf("%d%d", &n1, &n2);
	min = (n1<n2)?n1:n2;
	do {
		if (n1%c==0 && n2%c==0) {
			gcd = c;
		}
		c++;
	} while (c<=min);
	printf("GCD: %d", gcd);
}
