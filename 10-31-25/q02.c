// WAP to find the largest among 3 numbers using pointers

#include <stdio.h>
int main()
{
    int a, b, c, *p1, *p2, *p3, l;
    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", p1, p2, p3);

    l = (*p1 > *p2) ? ((*p1 > *p3) ? *p1 : *p3) : ((*p2 > *p3) ? *p2 : *p3);

    printf("The largest number is: %d", l);
}