/* PATTERN:
   ABCDE
   ABCD
   ABC
   AB
   A
*/

#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		for(j=1;j<=n-i;j++) {
			printf("%c ", 64+j);
		}
		printf("\n");
	}
}
