//Find the sum of all user entered nos. until sum exceeds 100 using for loop.
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(;sum<=100;) {
		printf("Enter a number: ");
		scanf("%d",&i);
		sum+=i;
	}
	printf("Sum = %d", sum);
}
