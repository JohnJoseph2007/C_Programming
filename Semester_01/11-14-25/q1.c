#include<stdio.h>
#include<math.h>
int main()
{
	int ar[30], size, i;
	float xi=0, variance, stdev, avg;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &ar[i]);
	}
	avg=0;
	for(int i=0; i<size; i++) {
		avg+=ar[i];
	}
	avg/=size;
	for(int i=0; i<size; i++) {
		xi+=pow((ar[i]-avg),2);
	}
	variance = xi/size;
	stdev = sqrt(variance);
	printf("STANDARD DEVIATION: %f\nVARIANCE: %f\n", stdev, variance);
}
