#include<stdio.h>
int main()
{
	int arr[20], size, index;
	printf("Enter array size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter index to delete: ");
	scanf("%d", &index);
	for(int i=index; i<size; i++) {
		arr[i] = arr[i+1];
	}
	size--;
	for(int i=0; i<size; i++) {
		printf("%d\t", arr[i]);
	}
}

