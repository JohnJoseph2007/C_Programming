//WAP to convert an input decimal number to an octal number

#include<stdio.h>
#include<math.h>
int main() {
	int dec, oct=0, c=0;
	printf("Enter a decimal number: ");
	scanf("%d", &dec);
	do {
		oct += (dec%8)*pow(10, c);
		dec/=8;
		c++;
	} while (dec>0);
	printf("Octal number: %d", oct);
}	
