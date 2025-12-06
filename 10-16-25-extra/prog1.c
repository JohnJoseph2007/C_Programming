/* PATTERN:
       A
      ABA
     ABCBA
    ABCDCBA
   ABCDEDCBA
    ABCDCBA
     ABCBA
      ABA
       A
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
		for(j=1;j<=i;j++) {
			printf("%c", 64+j);
		}
		//UPPER RIGHT
		for(j=i-1;j>0;j--) {
			printf("%c", 64+j);
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
			printf("%c", 64+j);
		}
		//LOWER RIGHT
		for(j=n-i-1; j>0; j--) {
			printf("%c", 64+j);
		}
		printf("\n");
	}
}
