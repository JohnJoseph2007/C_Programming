#include<stdio.h>
#include<stdbool.h>
bool exist(int *, int, int);
int main() {
	int arr[20], size, search;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", arr+i);
	}
	printf("Enter value to search: ");
	scanf("%d", &search);
	if(exist(arr, size, search)) {
		printf("%d exists in array.", search);
	} else {
		printf("%d does not exist in array.", search);
	}
}
bool exist(int *ptr, int s, int search) {
	for(int i=0; i<s; i++) {
		if(*(ptr+i) == search) {
			return true;
		}
	}
	return false;
}
