#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char *str, *sur;
	int size, extsize;
	printf("Enter length of first name: ");
	scanf("%d", &size);
	str = (char *)malloc(size*sizeof(char));
	printf("Enter first name: ");
	scanf("%s", str);
	printf("Enter length of surname: ");
	scanf("%d", &extsize);
	str = realloc(str, extsize+1);
	sur = (char *)malloc(extsize*sizeof(char));
	printf("Enter surname: ");
	scanf("%s", sur);
	strcat(str, " ");
	strcat(str, sur);
	printf("Full name: %s", str);
}

