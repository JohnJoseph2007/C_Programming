// Program to multiply two matrices
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr1[100][100], arr2[100][100], arr3[100][100];
	int r1, r2, c1, c2, sum;
	int i, j, k;
	printf("Enter rows and columns of first array:\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter rows and columns of second array:\n");
	scanf("%d%d", &r2, &c2);

	printf("Enter elements of first array:\n");

	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			printf("Enter value: ");
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("Enter elements of second array:\n");

	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			printf("Enter value: ");
			scanf("%d", &arr2[i][j]);
		}
	}

	if (c1 != r2)
	{
		printf("Invalid inputs");
		exit(0);
	}

	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			sum = 0;
			for (k = 0; k < c1; k++)
			{
				sum += arr1[i][k] * arr2[k][j];
			}
			arr3[i][j] = sum;
		}
	}

	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
}
