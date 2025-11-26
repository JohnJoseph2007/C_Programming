// WAP to find the factorial of a number using call-by-reference
#include <stdio.h>
void factorial(int *, int *);
int main()
{
    int n, fac, *np, *fp;
    np = &n;
    fp = &fac;

    printf("Enter a number: ");
    scanf("%d", np);

    factorial(np, fp);

    printf("Factorial of %d is: %d", *np, *fp);
}

void factorial(int *n, int *f)
{
    *f = 1;
    for (int i = 1; i <= *n; i++)
    {
        *f = (*f) * i;
    }
}