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
	int a2[20];
	for(int i=0; i<s; i++) {
		*(a2+i) = *(ptr+i);
	}
	for(int i=0; i<s; i++) {
		*(ptr+i) = *(a2+s-i-1);
	}
}
