#include<stdio.h>
int arraysum(int *, int);
int main() {
	int arr[20], size, sum;
	printf("Enter size of array: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter a value: ");
		scanf("%d", (arr + i));
	}
	sum = arraysum(arr, size);
	printf("Sum = %d", sum);
}
int arraysum(int *ptr, int size) {
	int s=0;
	for(int i=0;i<size;i++) {
		s+=*(ptr+i);
	}
	return s;
}
