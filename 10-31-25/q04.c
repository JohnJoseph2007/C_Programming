// WAP to check whether a number is prime or not using pointers

#include <stdio.h>
int main()
{
    int num, count = 0, *pnum, *pcount;
    pnum = &num;
    pcount = &count;
    printf("Enter a number: ");
    scanf("%d", pnum);
    for (int i = 1; i <= *pnum; i++)
    {
        if (*pnum % i == 0)
        {
            (*pcount)++;
        }
    }
    (*pcount == 2) ? printf("Prime") : printf("Not Prime");
}