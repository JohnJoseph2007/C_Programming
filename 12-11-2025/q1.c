#include<stdio.h>
int main()
{
	int arr[20], sum=0, size;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter a value: ");
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<size; i++) {
		sum+=arr[i];
	}
	printf("Sum = %d\n", sum);
}
