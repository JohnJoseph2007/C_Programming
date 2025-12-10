//WAP to find the fibonacci series upto an input 'n'

#include<stdio.h>
int main() {
	int n, x0, x1, x2;
	printf("Enter a number 'n': ");
	scanf("%d", &n);
	x0 = 0;
	x1 = 1;
	printf("%d\n%d\n", x0, x1);
	x2 = x1+x0;
	do {
		printf("%d\n", x2);
		x0 = x1;
		x1 = x2;
		x2 = x1+x0;
	} while (x2<n);
}
