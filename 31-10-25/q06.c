// WAP to check whether a number is palindromic using pointers.
#include <stdio.h>
int main()
{
    int num, revnum = 0, rem, *pnum, *prevnum, *prem, temp;
    pnum = &num;
    prevnum = &revnum;
    prem = &rem;
    printf("Enter a number: ");
    scanf("%d", pnum);
    temp = *pnum;
    while (temp > 0)
    {
        *prem = temp % 10;
        *prevnum = (*prevnum * 10) + *prem;
        temp = temp / 10;
    }
    (*pnum == *prevnum) ? printf("Palindromic") : printf("Not Palindromic");
}