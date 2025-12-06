#include<stdio.h>
int main()
{
	int arr[20], size, index, value;
	printf("Enter array size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter insertion value and index:\n");
	scanf("%d%d", &value, &index);
	for(int i=size; i>index; i--) {
		arr[i]=arr[i-1];
	}
	arr[index]=value;
	size++;
	for(int i=0; i<size; i++) {
		printf("%d\t", arr[i]);
	}
}
