//Find factorial of any user input using for loop.
#include<stdio.h>
int main()
{
	int n, i, fac=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n;i>0;i--) {
		fac*=i;
	}
	printf("Factorial of %d is %d\n", n, fac);
}

