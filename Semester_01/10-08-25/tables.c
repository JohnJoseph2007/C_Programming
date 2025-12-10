//Print the multiplication table of any entered number.
#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
}

