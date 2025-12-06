#include<stdio.h>
#include<stdlib.h>
int main() {
	int *dma_array, size, sum=0;
	printf("Enter size: ");
	scanf("%d", &size);
	dma_array = (int *)malloc(size*sizeof(int));
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", dma_array+i);
	}
	for(int i=0; i<size; i++) {
		sum+=*(dma_array+i);
	}
	printf("Sum = %d\n", sum);
	free(dma_array);
}
	
