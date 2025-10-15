/* PATTERN:
   5 5 5 5 5
   4 4 4 4 
   3 3 3
   2 2
   1
*/

#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		for(j=1;j<=n-i;j++) {
			printf("%d ", n-i);
		}
		printf("\n");
	}
}
