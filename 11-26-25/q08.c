#include<stdio.h>
int main()
{
	int arr1[100][100], transpose[100][100];
	int r1, c1;
	printf("Enter matrix size: ");
	scanf("%d%d", &r1, &c1);
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			printf("Enter value: ");
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			transpose[j][i] = arr1[i][j];
		}
	}
	for(int i=0; i<c1; i++) {
		for(int j=0; j<r1; j++) {
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
}
