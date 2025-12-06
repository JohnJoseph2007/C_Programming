// WAP to calculate GCD of two numbers using pointers.
#include <stdio.h>
int main()
{
    int a, b, gcd, min, *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Enter two numbers: ");
    scanf("%d%d", pa, pb);
    min = (*pa < *pb) ? *pa : *pb;
    for (int i = 1; i <= min; i++)
    {
        if (*pa % i == 0 && *pb % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD is %d", gcd);
}