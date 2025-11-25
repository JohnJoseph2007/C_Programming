// Write a menu-driven program to calculate area of rectangle, area of square, area of triangle, perimeter of square, perimeter of rectangle using pointers.
#include <stdio.h>
int main()
{
    int choice = 0, c = 0;
    float l = 0, b = 0, h = 0, base = 0, s = 0, area = 0, perimeter = 0;
    float *pl = &l, *pb = &b, *ps = &s, *pbase = &base, *ph = &h, *pa = &area, *pp = &perimeter;
    printf("\nMenu:\n");
    printf("1. Area of Rectangle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Triangle\n");
    printf("4. Perimeter of Square\n");
    printf("5. Perimeter of Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter length and breadth: ");
        scanf("%f %f", pl, pb);
        *pa = (*pl) * (*pb);
        printf("Area of rectangle = %f\n", *pa);
        break;
    case 2:
        printf("Enter side of square: ");
        scanf("%f", ps);
        *pa = (*ps) * (*ps);
        printf("Area of square = %f\n", *pa);
        break;
    case 3:
        printf("Enter base and height of triangle: ");
        scanf("%f %f", pbase, ph);
        *pa = 0.5 * (*pbase) * (*ph);
        printf("Area of triangle = %f\n", *pa);
        break;
    case 4:
        printf("Enter side of square: ");
        scanf("%f", ps);
        *pp = 4.0 * (*ps);
        printf("Perimeter of square = %f\n", *pp);
        break;
    case 5:
        printf("Enter length and breadth: ");
        scanf("%f %f", pl, pb);
        *pp = 2.0 * ((*pl) + (*pb));
        printf("Perimeter of rectangle = %f\n", *pp);
        break;
    default:
        printf("Invalid choice.");
    }
}