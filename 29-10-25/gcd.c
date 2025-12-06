#include<stdio.h>
int gcd(int, int);
int main()
{
	int a,b,g;
	printf("Enter 2 numbers:\n");
	scanf("%d%d", &a, &b);
	g = gcd(a,b);
	printf("GCD = %d", g);
}
int gcd(int x, int y)
{
	int min, g;
	min = (x<y)?x:y;
	for(int i=1; i<=min; i++) {
		if (x%i==0 && y%i==0) {
			g = i;
		}
	}
	return g;
}
