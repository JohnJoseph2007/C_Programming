// Write a user defined function to reverse an array using pointers
#include<stdio.h>
void reverse(int*, int);
int main() {
	int arr[30], size;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		scanf("%d", (arr+i));
	}
	reverse(arr, size);
	printf("Reversed array:\n");
	for(int i=0; i<size; i++) {
		printf("%d\t", *(arr+i));
	}
}
void reverse(int *arr, int size) {
	for(int i=0; i<size/2; i++) {
		*(arr+i) = *(arr+i) + *(arr+(size-i-1));
		*(arr+(size-i-1)) = *(arr+i) - *(arr+(size-i-1));
		*(arr+i) = *(arr+i) - *(arr+(size-i-1));
	}
}
