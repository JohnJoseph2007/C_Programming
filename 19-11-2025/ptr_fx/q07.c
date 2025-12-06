#include<stdio.h>
void reverse(int *, int);
int main() {
	int arr[20], size;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", arr+i);
	}
	printf("Forward:\n");
	for(int i=0; i<size; i++) {
		printf("%d ", *(arr+i));
	}
	reverse(arr, size);
	printf("\nReverse:\n");
	for(int i=0; i<size; i++) {
		printf("%d ",*(arr+i));
	}
}
void reverse(int *ptr, int s) {
	for(int i=0; i<(s/2); i++) {
		*(ptr+i) = *(ptr+i) + *(ptr+s-i-1);
		*(ptr+s-i-1) = *(ptr+i) - *(ptr+s-i-1);
		*(ptr+i) = *(ptr+i) - *(ptr+s-i-1);
	}
}
