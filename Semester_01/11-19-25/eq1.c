#include<stdio.h>
#include<stdbool.h>
bool equal(int*, int*, int);
int main() {
	int arr[30], subarr[30], ax[30], size, subsize, freq;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	printf("Enter sub-array size: ");
	scanf("%d", &subsize);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &subarr[i]);
	}
	//Create slices, check equals update frequency

}
bool equal(int *ptr, int *subptr, int subs) {
	for(int i=0; i<subs; i++) {
		if(*(ptr+i)!=*(subptr+i)) {
			return false;
		}
	}
	return true;
}
