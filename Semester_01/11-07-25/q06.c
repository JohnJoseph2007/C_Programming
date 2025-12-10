// WAP to check whether a number is palindromic using call-by-reference.
#include <stdio.h>
void palindrome(int *, int *);
int main()
{
    int num, revnum = 0, *pnum, *prevnum;
    pnum = &num;
    prevnum = &revnum;
    printf("Enter a number: ");
    scanf("%d", pnum);
    palindrome(pnum, prevnum);
    (*pnum == *prevnum) ? printf("Palindromic") : printf("Not Palindromic");
}

void palindrome(int *num, int *revnum)
{
    int rem, temp;
    temp = *num;
    while (temp > 0)
    {
        rem = temp % 10;
        *revnum = (*revnum * 10) + rem;
        temp = temp / 10;
    }
}