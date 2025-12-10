//WAP to print all natural numbers in descending order upto 1, from the input value excluding any number divisible by 7

#include<stdio.h>
int main()
{
	int n, c=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	do {
		if (n%7!=0) {
			printf("%d\n", n);
		}
		n--;
	} while (n>0);
}
