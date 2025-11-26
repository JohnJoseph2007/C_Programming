// WAP to check whether a number is prime or not using call-by-reference

#include <stdio.h>
void prime(int *, int *);
int main()
{
    int num, count, *pnum, *pcount;
    pnum = &num;
    pcount = &count;
    printf("Enter a number: ");
    scanf("%d", pnum);
    prime(pnum, pcount);
    (*pcount == 2) ? printf("Prime") : printf("Not Prime");
}
void prime(int *num, int *count)
{
    *count = 0;
    for (int i = 1; i <= *num; i++)
    {
        if (*num % i == 0)
        {
            (*count)++;
        }
    }
}