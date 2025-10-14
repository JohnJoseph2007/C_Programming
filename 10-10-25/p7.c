/*Pattern:
  1
  2 3
  4 5 6
  7 8 9 10
 (upto entered input)*/

#include<stdio.h>
int main()
{
	int n, i, j, z=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		for(j=1;j<=i;j++) {
			printf("%d ", z);
			z++;
		}
		printf("\n");
	}
}
