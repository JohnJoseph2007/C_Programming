#include<stdio.h>
void merge(int*, int*, int*, int, int);
int main() {
	int a1[30], a2[30], a3[60], s1, s2;
	printf("Enter array sizes:\n");
	scanf("%d%d", &s1, &s2);
	for(int i=0; i<s1; i++) {
		printf("Enter array1 value: ");
		scanf("%d", (a1+i));
	}
	for(int i=0; i<s2; i++) {
		printf("Enter array2 value: ");
		scanf("%d", (a2+i));
	}
	merge(a1, a2, a3, s1, s2);
	for(int i=0; i<(s1+s2); i++) {
		printf("%d ", *(a3+i));
	}
}
void merge(int *a1, int *a2, int *a3, int s1, int s2) {
	for(int i=0; i<s1; i++) {
		*(a3+i)=*(a1+i);
	}
	for(int i=0; i<s2; i++) {
		*(a3+s1+i)=*(a2+i);
	}
}
