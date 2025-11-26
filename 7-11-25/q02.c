// WAP to find the largest among 3 numbers using call-by-reference

#include <stdio.h>
void largest(int *, int *, int *, int *);
int main()
{
    int a, b, c, *p1, *p2, *p3, l, *pl;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    pl = &l;

    printf("Enter three numbers: ");
    scanf("%d%d%d", p1, p2, p3);
    largest(p1, p2, p3, pl);
    printf("The largest number is: %d", *pl);
}
void largest(int *a, int *b, int *c, int *large)
{
    *large = (*a > *b) ? ((*a > *c) ? *a : *c) : ((*b > *c) ? *b : *c);
}