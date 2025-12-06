/* PATTERN:
   a a a a a
   b b b b
   c c c
   d d
   e
*/

#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		for(j=1;j<=n-i;j++) {
			printf("%c ", 97+i);
		}
		printf("\n");
	}
}
