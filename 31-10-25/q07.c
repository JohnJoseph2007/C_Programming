// WAP to swap two numbers using pointers.
#include <stdio.h>
int main()
{
    int a, b, *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Enter two numbers:\n");
    scanf("%d%d", pa, pb);
    printf("Before swapping: a = %d, b = %d\n", *pa, *pb);
    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;
    printf("After swapping: a = %d, b = %d\n", *pa, *pb);
}