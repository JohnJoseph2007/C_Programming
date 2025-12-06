#include<stdio.h>
int main() {
	int arr1[100][100], arr2[100][100], arr3[100][100];
	int r1, r2, c1, c2, sum;
	int i,j,k;
	printf("Enter rows and columns of first array:\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter rows and columns of second array:\n");
	scanf("%d%d", &r2, &c2);

	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			printf("Enter value: ");
			scanf("%d", &arr1[i][j]);
		}
	}

	for(int i=0; i<r2; i++) {
		for(int j=0; j<c2; j++) {
			printf("Enter value: ");
			scanf("%d", &arr2[i][j]);
		}
	}
	
	if (c1!=r2) {
		printf("Invalid inputs");
		exit();
	}
	
	for(i=0; i<r1; i++) {
		sum = 0
		for(j=0; i<c1; i++) {
			for(k=0; k<r2; k++) {
				sum+=arr1[i][j]+arr2[k][i]
			}
		}
		arr3[i][j]=sum;
	}
	for(i=0; i<r1; i++) {
		for(j=0; j<c2; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

}
