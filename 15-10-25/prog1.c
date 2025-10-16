// Take a number as input and print its digits sequentially as words
// e.g.: 157 -> ONE FIVE SEVEN

#include<stdio.h>
int main()
{
	int n, rev=0, digit, zero=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n%10==0) {
		zero++;
		n/=10;
	}
	while(n>0) {
		rev+=(n%10);
		rev*=10;
		n/=10;
	}
	rev/=10;
	while(rev>0) {
		digit = rev%10;
		switch(digit) {
			case 0: printf("ZERO "); break;
			case 1: printf("ONE "); break;
			case 2: printf("TWO "); break;
			case 3: printf("THREE "); break;
			case 4: printf("FOUR "); break;
			case 5: printf("FIVE "); break;
			case 6: printf("SIX "); break;
			case 7: printf("SEVEN "); break;
			case 8: printf("EIGHT "); break;
			case 9: printf("NINE "); break;
		}
		rev/=10;
	}
	for(int i=1; i<=zero; i++) {
		printf("ZERO ");
	}
}
