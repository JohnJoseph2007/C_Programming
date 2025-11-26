// WAP to calculate GCD of two numbers using call-by-reference.
#include <stdio.h>
void gcd(int *, int *, int *);
int main()
{
    int a, b, g, *pa, *pb, *pg;
    pa = &a;
    pb = &b;
    pg = &g;
    printf("Enter two numbers: ");
    scanf("%d%d", pa, pb);
    gcd(pa, pb, pg);
    printf("GCD is %d", *pg);
}
void gcd(int *a, int *b, int *g)
{
    int min = (*a < *b) ? *a : *b;
    for (int i = 1; i <= min; i++)
    {
        if (*a % i == 0 && *b % i == 0)
        {
            *g = i;
        }
    }
}