#include<stdio.h>
int main()
{
	int arr[20], size, s, found=0;
	printf("Enter array size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter a value to search: ");
	scanf("%d", &s);
	for(int i=0; i<size; i++) {
		if(arr[i]==s) {
			found=1;
			break;
		}
	}
	(found)?printf("%d is present.\n", s):printf("%d is not present.\n", s);
}
