//WAP to check if an input number is perfect or not [ Sum of factors = Input number ]

#include<stdio.h>
int main()
{
	int n, c=0, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	do {
		if (n%c==0){
			sum += c;
		}
		c++;
	} while (c<n);
	(sum==n)?printf("Perfect"):printf("Not perfect");
}
