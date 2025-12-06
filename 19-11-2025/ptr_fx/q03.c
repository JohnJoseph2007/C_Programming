#include<stdio.h>
int lg(int *, int);
int main() {
	int arr[20], size, largest;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", (arr+i));
	}
	largest = lg(arr, size);
	printf("Largest number = %d", largest);
}
int lg(int *ptr, int s) {
	int l = *ptr;
	for(int i=0; i<s; i++) {
		if(*(ptr+i) > l) {
			l = *(ptr+i);
		}
	}
	return l;
}

