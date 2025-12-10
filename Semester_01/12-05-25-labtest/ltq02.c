// Write a function to convert a string to uppercase without using predefined functions
#include<stdio.h>
void uc(char *);
int main() {
	char str[40];
	printf("Enter a string: ");
	scanf(" %[^\n]s", str);
	uc(str);
	printf("Uppercase string: %s", str);
}
void uc(char *str) {
	for(int i=0; *(str+i)!='\0'; i++) {
		if(*(str+i)>=97 && *(str+i)<=122) {
			*(str+i)-=32;
		}
	}
}
