#include<stdio.h>
int main() {
	char str[100], strcopy[100];
	int i;
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	for(i=0; str[i]!='\0'; i++) {
		strcopy[i] = str[i];
	}
	strcopy[i+1] = '\0';
	printf("Copied string: %s", strcopy);
}
