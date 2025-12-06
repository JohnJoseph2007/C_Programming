#include<stdio.h>
int pal(int);
int main() {
	int a,res;
	printf("Enter a number: ");
	scanf("%d", &a);
	(a==pal(a))?printf("Palindrome"):printf("Non-palindrome");
}
int pal(int x) {
	int rev=0;
	while(x>0) {
		rev*=10;
		rev+=x%10;
		x/=10;
	}
	return rev;
}
