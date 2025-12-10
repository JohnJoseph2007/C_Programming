/*Pattern:
  0
  10
  010
  1010
  01010
 (upto entered input)*/

#include<stdio.h>
int main()
{
	int n, i, j, z;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		z = (i%2==1)?0:1;
		for(j=1;j<=i;j++) {
			printf("%d", z);
			z = (z==0)?1:0;
		}
		printf("\n");
	}
}
