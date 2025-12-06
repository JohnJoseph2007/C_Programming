#include<stdio.h>
int main()
{
	int arr[20], size, l;
	printf("Enter array size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	l=arr[0];
	for(int i=1; i<size; i++) {
		if(arr[i]>l) {
			l = arr[i];
		}
	}
	printf("Largest number: %d\n", l);
}
