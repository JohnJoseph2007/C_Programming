// WAP to swap two numbers using call-by-reference.
#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b, *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Enter two numbers:\n");
    scanf("%d%d", pa, pb);
    printf("Before swapping: a = %d, b = %d\n", *pa, *pb);
    swap(pa, pb);
    printf("After swapping: a = %d, b = %d\n", *pa, *pb);
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}