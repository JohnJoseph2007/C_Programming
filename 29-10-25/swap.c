#include<stdio.h>
void swap(int, int);
int main() {
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);
	swap(a,b);
}
void swap(int a, int b) {
	printf("Originally: %d\t%d\n",a,b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After-swap: %d\t%d\n",a,b);
}
