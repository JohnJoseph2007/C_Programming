// WAP to check if a number is an Armstrong number or not using function

#include <stdio.h>

void arms(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    arms(num);
}

void arms(int x)
{
    int temp, remainder, result = 0, n = 0;
    temp = x;
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }
    temp = x;
    while (temp != 0)
    {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
        {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }

    (result == x) ? printf("%d is an Armstrong number.", x) : printf("%d is not an Armstrong number.", x);
}