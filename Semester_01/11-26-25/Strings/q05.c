#include<stdio.h>
int main() {
	char str[100];
	int l=0;
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	for(l=0;str[l]!='\0';l++);
	printf("Length = %d\n", l);

}
