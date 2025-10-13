//Find the sum of digits of an entered number using for loop.
#include<stdio.h>
int main()
{
	int n, i, j, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n;i>0;i/=10) {
		sum+=(i%10);
	}
	printf("Sum of digits of %d is %d\n", n, sum);
}

