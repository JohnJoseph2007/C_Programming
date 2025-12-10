#include<stdio.h>
#include<stdlib.h>
int main() {
	int *arrptr, size, largest=0;
	printf("Enter size: ");
	scanf("%d", &size);
	arrptr = (int *)malloc(size*sizeof(int));
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", arrptr+i);
	}
	for(int i=0; i<size; i++) {
		largest = (largest>=*(arrptr+i))?largest:*(arrptr+i);
	}
	printf("Largest = %d\n", largest);
	free(arrptr);	
}
	
