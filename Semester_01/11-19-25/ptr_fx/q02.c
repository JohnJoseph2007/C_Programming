#include<stdio.h>
void even(int *, int);
int main()
{
	int arr[20], size;
	printf("Enter array size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", (arr+i));
	}
	even(arr, size);
}
void even(int *ptr, int s) {
	for(int i=0; i<s; i++) {
		if(*(ptr+i)%2==0) {
			printf("%d is even\n", *(ptr+i));
		}
	}
}
