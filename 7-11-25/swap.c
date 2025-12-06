#include<stdio.h>
void swap(int*,int*);
int main() {
	int a, b, *ap, *bp;
	bp = &b;
	ap = &a;
	printf("Enter two numbers:\n");
	scanf("%d%d", ap, bp);
	printf("Originally: %d\t%d\n", *ap, *bp);
	swap(ap, bp);
	printf("After-swap: %d\t%d\n", *ap, *bp);
}
void swap(int *a, int *b) {
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}
