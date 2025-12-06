//Find GCD of two entered numbers using a for loop
#include<stdio.h>
int main()
{
	int n1, n2, min, i, gcd;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	min = (n1<n2)?n1:n2;
	for(i=1;i<=min;i++) {
		if(n1%i==0 && n2%i==0) {
			gcd=i;
		}
	}
	printf("GCD = %d\n", gcd);
}

