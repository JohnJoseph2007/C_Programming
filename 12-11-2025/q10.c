#include<stdio.h>
int main()
{
	int a[20], b[20], size;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &a[i]);
	}
	for(int i=0; i<size; i++) {
		b[i] = a[i];
	}
	printf("Copied array:\n");
	for(int i=0; i<size; i++) {
		printf("%d\t", b[i]);
	}
}
