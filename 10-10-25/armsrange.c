//WAP to print all Armstrong numbers between a given range.
#include<stdio.h>
#include<math.h>
int main()
{
	int start, end, i, j, l, sum;
	printf("Enter start and end range value:\n");
	scanf("%d%d", &start, &end);
	for(i=start; i<=end; i++) {
		l=0;
		sum=0;
		for(j=i; j>0; j/=10) {
			l++;
		}
		printf("length: %d\n", l);
		for(j=i; j>0; j/=10) {
			sum+=pow(j%10,l);
		}
		if(sum==i) {
			printf("%d is an armstrong number\n", i);
		}
	}
}

