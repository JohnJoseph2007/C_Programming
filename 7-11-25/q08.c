// WAP to check whether an entered year is leap year or not using call-by-reference.
#include <stdio.h>
void leapyear(int *);
int main()
{
    int yr, *pyr;
    pyr = &yr;
    printf("Enter a year: ");
    scanf("%d", pyr);
    leapyear(pyr);
}

void leapyear(int *yr)
{
    if ((*yr) % 4 == 0 && (*yr) % 100 != 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}