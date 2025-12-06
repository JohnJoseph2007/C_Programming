#include<stdio.h>
int main() {
	char str[100];
	int uc=0, lc=0;
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	for(int i=0; str[i]!='\0'; i++) {
		if (str[i]>=65 && str[i]<=90) {
			uc++;
		} else if (str[i]>=97 && str[i]<=122) {
			lc++;
		}
	}
	printf("Uppercase: %d\nLowercase: %d\n", uc, lc);
}
