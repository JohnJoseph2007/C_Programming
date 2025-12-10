#include<stdio.h>
#include<stdlib.h>
int main() {
	int *arrptr, size, find;
	printf("Enter size: ");
	scanf("%d", &size);
	arrptr = (int *)malloc(size*sizeof(int));
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", arrptr+i);
	}
	printf("Enter value to find: ");
	scanf("%d", &find);
	for(int i=0; i<size; i++) {
		if(*(arrptr+i)==find) {
			printf("Element found!");
			exit(0);
		}
	}
	printf("Element not found");
	free(arrptr);
}
