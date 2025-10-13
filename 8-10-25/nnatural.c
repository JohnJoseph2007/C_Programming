//Print the first n natural numbers using for loop.
#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		printf("%d\n", i);
	}
}

