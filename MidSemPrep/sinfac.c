#include<stdio.h>
#include<math.h>
int main() 
{
	int x, i, j, fac, temp;
	double sum=0; 
	printf("Enter a number: ");
	scanf("%d", &x);
	temp = x;
	for(i=0; i<x; i+=2) {
		fac = 1;
		for(j=1;j<=i;j++) {
			fac*=j;
		}
		sum+=(pow(x,(i+1))/(float)fac)*pow(-1, (i/2));
	}
	(sin(x)==sum)?printf("Valid"):printf("Invalid");
}
	
