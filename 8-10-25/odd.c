//Print all odd numbers in given range
#include<stdio.h>
int main()
{
	int start, end, i;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&start,&end);
	for(i=start; i<=end; i++) {
		if (i%2==1) {
			printf("%d\n",i);
		}
	}
}
