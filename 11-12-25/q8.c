#include<stdio.h>
int main()
{
	int arr[20], size, temp;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<size/2; i++) {
		arr[i]+=arr[size-i-1];
		arr[size-i-1]=arr[i]-arr[size-i-1];
		arr[i]=arr[i]-arr[size-i-1];
	}
	printf("Reversed:\n");
	for(int i=0; i<size; i++) {
		printf("%d\t", arr[i]);
	}
}
