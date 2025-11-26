// WAP to compute x^y using call-by-reference without predefined functions for both positive and negative exponents.

#include <stdio.h>
void exponent(int *, int *, float *);
int main()
{
    int x, y, *px, *py;
    float exp, *pexp;
    px = &x;
    py = &y;
    pexp = &exp;
    printf("Enter base and exponent:\n");
    scanf("%d%d", px, py);
    exponent(px, py, pexp);
    printf("Answer = %f\n", *pexp);
}

void exponent(int *x, int *y, float *exp)
{
    *exp = 1.0;
    if (*y >= 0)
    {
        for (int i = 0; i < *y; i++)
        {
            *exp = (*exp) * (*x);
        }
    }
    else
    {
        for (int i = 0; i < -(*y); i++)
        {
            *exp = (*exp) / (*x);
        }
    }
}