// WAP to check whether an entered year is leap year or not using pointers.
#include <stdio.h>
int main()
{
    int yr, *pyr;
    pyr = &yr;
    printf("Enter a year: ");
    scanf("%d", pyr);
    if ((*pyr % 4 == 0 && *pyr % 100 != 0) || (*pyr % 400 == 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}