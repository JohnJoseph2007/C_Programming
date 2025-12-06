#include<stdio.h>
void copy(int*, int*, int);
int main() {
	int a1[30], a2[30], s;
	printf("Enter size: ");
	scanf("%d", &s);
	for(int i=0; i<s; i++) {
		printf("Enter value: ");
		scanf("%d", a1+i);
	}
	copy(a1, a2, s);
	for(int i=0; i<s; i++) {
		printf("%d ", *(a2+i));
	}
}
void copy(int *p1, int *p2, int size) {
	for(int i=0; i<size; i++) {
		*(p2+i) = *(p1+i);
	}
}
