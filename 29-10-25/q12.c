// WAP to find the fibonacci series upto n using function

#include <stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibonacci(n);
}
void fibonacci(int x)
{
    int x1 = 0, x2 = 1, x3;
    printf("%d\t%d\t", x1, x2);
    while (x3 < x)
    {
        x3 = x1 + x2;
        if (x3 >= x)
        {
            break;
        }
        printf("%d\t", x3);
        x1 = x2;
        x2 = x3;
    }
}