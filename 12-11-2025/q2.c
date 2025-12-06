#include<stdio.h>
int main()
{
	int arr[20], size;
	printf("Enter array size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<size; i++) {
		if(arr[i]%2==0) {
			printf("%d\n",arr[i]);
		}
	}
}
