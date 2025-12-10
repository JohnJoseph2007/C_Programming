//Find fibonacci up to an entered number
#include<stdio.h>
int main()
{
	int n,x1,x2,x3;
	printf("Enter a number: ");
	scanf("%d", &n);
	x1=0;
	x2=1;
	printf("%d\n%d\n", x1, x2);
	x3 = x1 + x2;
	for(;x3<n;) {
		printf("%d\n",x3);
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
}

