// WAP to find the factorial of a number using pointers
#include <stdio.h>
int main()
{
    int n, i, fact = 1, *np, *fp;
    np = &n;
    fp = &fact;

    printf("Enter a number: ");
    scanf("%d", np);

    for (i = 1; i <= *np; i++)
    {
        *fp = (*fp) * i;
    }

    printf("Factorial of %d is: %d", *np, *fp);
}