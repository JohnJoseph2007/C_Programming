#include<stdio.h>
#include<math.h>
int main()
{
    float r, vol;
    printf("Enter the radius: ");
    scanf("%f", &r);
    vol = (4.0/3)*3.141*pow(r,3);
    printf("Volume is %f", vol);
}