//Print sum of the even numbers and odd numbers in a given range
#include<stdio.h>
int main()
{
	int start, end, i, evensum=0, oddsum=0;
	printf("Enter a range:\n");
	scanf("%d%d", &start, &end);
	for(i=start; i<=end; i++) {
		if (i%2==0) {
			evensum+=i;
		} else {
			oddsum+=i;
		}
	}
	printf("Even Sum = %d\nOdd Sum = %d\n", evensum, oddsum);
}
