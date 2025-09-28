//WAP to print the multiplication tables of a given input

#include<stdio.h>
int main() {
	int n, c=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Tables of %d:\n", n);
	do {
		printf("%d x %d = %d\n", n, c, n*c);
		c++;
	} while (c<=n);
}
