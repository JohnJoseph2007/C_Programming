#include<stdio.h>
int insert(int *, int, int, int);
int main() {
	int arr[20], size, pos, val;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", arr+i);
	}
	printf("Enter insert position and value:\n");
	scanf("%d%d", &pos, &val);
	for(int i=0; i<size; i++) {
		printf("%d\t", *(arr+i));
	}
	size = insert(arr, size, pos, val);
	for(int i=0; i<size; i++) {
		printf("%d\t", *(arr+i));
	}
}
int insert(int *ptr, int size, int pos, int val) {
	size++;
	for(int i=size; i>pos; i--) {
		*(ptr+i) = *(ptr+i-1);
	}
	*(ptr+pos)=val;
	return size;
}
		
