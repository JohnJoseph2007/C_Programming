// WAP to compute x^y using pointers without predefined functions for both positive and negative exponents.

#include <stdio.h>
int main()
{
    int x, y, *px, *py;
    float exp = 1.0, *pexp;
    px = &x;
    py = &y;
    pexp = &exp;
    printf("Enter base and exponent:\n");
    scanf("%d%d", px, py);
    if (*py >= 0)
    {
        for (int i = 0; i < *py; i++)
        {
            *pexp = (*pexp) * (*px);
        }
    }
    else
    {
        for (int i = 0; i < -(*py); i++)
        {
            *pexp = (*pexp) / (*px);
        }
    }
    printf("Answer = %f\n", *pexp);
}