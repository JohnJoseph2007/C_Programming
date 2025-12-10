#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, side, area, perim;
    printf("Enter (x1,y1) and (x2,y2) coordinates\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    side = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    area = pow(side, 2);
    perim = side * 4;
    printf("Area is %f\nPerimeter is %f", area, perim);
}