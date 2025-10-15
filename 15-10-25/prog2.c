// WAP to enter a number. If the square root of the reverse of the square of the input is the reverse of the input, print valid.

#include<stdio.h>
#include<math.h>
int main()
{
	int n, ns, nsrev=0, nsqrt, nrev=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	ns = pow(n,2);
	while(ns>0) {
		nsrev+=ns%10;
		nsrev*=10;
		ns/=10;
	}
	nsrev/=10;
	nsqrt = sqrt(nsrev);
	while(nsqrt>0) {
		nrev+=nsqrt%10;
		nrev*=10;
		nsqrt/=10;
	}
	nrev/=10;
	(nrev==n)?printf("Valid"):printf("Invalid");
}

