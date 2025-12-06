/* PATTERN:
       a
      bab
     cbabc
    dcbabcd
   edcbabcde
    dcbabcd
     cbabc
      bab
       a
*/

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number: ");
	scanf("%d", &n);
	//UPPER HALF + MIDDLE HORIZONTAL
	for(i=1;i<=n;i++) {
		//UPPER LEFT + MIDDLE VERTICAL
		for(j=1;j<=n-i;j++) {
			printf(" ");
		}
		for(j=i;j>0;j--) {
			printf("%c", 96+j);
		}
		//UPPER RIGHT
		for(j=1;j<i;j++) {
			printf("%c", 97+j);
		}
		printf("\n");
	}
	//LOWER HALF
	for(i=1;i<n;i++) {
		//LOWER LEFT + MIDDLE VERTICAL
		for(j=1;j<=i;j++) {
			printf(" ");
		}
		for(j=n-i;j>0;j--) {
			printf("%c", 96+j);
		}
		//LOWER RIGHT
		for(j=1; j<n-i; j++) {
			printf("%c", 97+j);
		}
		printf("\n");
	}
}
