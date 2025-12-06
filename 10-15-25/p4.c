/* PATTERN:
   0 1 0 1 0
   1 0 1 0
   0 1 0
   1 0
   0
*/

#include<stdio.h>
int main()
{
	int n, i, j, z;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		z = (i%2==0)?0:1;
		for(j=1;j<=n-i;j++) {
			printf("%d ", z);
			z = (z==0)?1:0;
		}
		printf("\n");
	}
}
