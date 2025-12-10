#include<stdio.h>
int delete(int *, int, int);
int main() {
	int arr[20], size, pos;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", arr+i);
	}
	printf("Enter position to delete: ");
	scanf("%d", &pos);

	printf("Original: ");
	for(int i=0; i<size; i++) {
		printf("%d", *(arr+i));
	}
	printf("\n");

	size = delete(arr, size, pos);

	printf("After Deletion: ");
	for(int i=0; i<size; i++) {
		printf("%d", *(arr+i));
	}
}
int delete(int *ptr, int s, int pos) {
	for(int i=pos; i<s; i++) {
		*(ptr+i) = *(ptr+i+1);
	}
	s--;
	return s;
}
