#include<stdio.h>
int main()
{
	int a[20], b[20], c[40], sizea, sizeb, count=0;
	printf("Enter size of first array: ");
	scanf("%d", &sizea);
	for(int i=0; i<sizea; i++) {
		printf("Enter value: ");
		scanf("%d", &a[i]);
	}
	printf("Enter size of second array: ");
	scanf("%d", &sizeb);
	for(int i=0; i<sizeb; i++) {
		printf("Enter value: ");
		scanf("%d", &b[i]);
	}
	for(int i=0; i<sizea; i++) {
		c[count] = a[i];
		count++;
	}
	for(int i=0; i<sizeb; i++) {
		c[count] = b[i];
		count++;
	}
	printf("Third array:\n");
	for(int i=0; i<count; i++) {
		printf("%d\t", c[i]);
	}
}
