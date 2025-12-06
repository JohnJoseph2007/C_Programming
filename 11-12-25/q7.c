#include<stdio.h>
int main()
{
	int arr[20], arr2[20], size;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<size; i++) {
		arr2[i]=arr[size-i-1];
	}
	printf("Reversed:\n");
	for(int i=0; i<size; i++) {
		printf("%d\t", arr2[i]);
	}
}
