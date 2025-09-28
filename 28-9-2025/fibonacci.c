//WAP to find the fibonacci series upto an input 'n'

#include<stdio.h>
int main() {
	int n, x0, x1, x2;
	printf("Enter a number 'n': ");
	scanf("%d", &n);
	n-=2;
	x0 = 0;
	x1 = 1;
	printf("%d\n%d\n", x0, x1);
	do {
		x2 = x1+x0;
		x0 = x1;
		x1 = x2;
		printf("%d\n", x2);
		n--;
	} while (n>0);
}
