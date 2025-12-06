#include<stdio.h>
int main() {
	char str[100];
	int words=1, space=0, sentence=0;
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	for(int i=0; str[i]!='\0'; i++) {
		if (str[i]==' ') {
			space++;
			words++;
		} else if (str[i]=='.') {
			sentence++;
		}
	}
	printf("Words:%d\nSentences:%d\nSpaces:%d\n", words, sentence, space);
}
