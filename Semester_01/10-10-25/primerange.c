//WAP to find all prime numbers between a given range
#include<stdio.h>
int main()
{
	int start, end, i, j, count;
	printf("Enter range limits: \n");
	scanf("%d%d", &start, &end);
	for(i=start; i<=end; i++) {
		count = 0;
		for(j=1;j<=i;j++) {
			if (i%j==0) {
				count++;
			}
		}
		if(count==2) {
			printf("%d is prime\n", i);
		}
	}
}
