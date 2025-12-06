/* PATTERN:
       *
      ***
     *****
    *******
   *********
    *******
     *****
      ***
       *
*/

#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d", &n);
	//UPPER HALF + MID LINE
	for(i=1;i<=n;i++) {
		//UPPER LEFT + MID VERTICAL
		for(j=1; j<=n-i; j++) {
			printf(" ");
		}
		for(j=1;j<=i;j++) {
			printf("*");
		}
		//UPPER RIGHT
		for(j=1;j<i;j++) {
			printf("*");
		}
		printf("\n");
	}
	//LOWER HALF
	for(i=1;i<n;i++) {
		//LOWER LEFT + MIDDLE VERTICAL
		for(j=1;j<=i;j++) {
			printf(" ");
		}
		for(j=1;j<=n-i;j++) {
			printf("*");
		}
		//LOWER RIGHT
		for(j=1;j<n-i;j++) {
			printf("*");
		}
		printf("\n");
	}
}
