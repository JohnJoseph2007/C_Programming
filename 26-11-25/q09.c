#include<stdio.h>
int main() {
	int arr1[100][100];
	int r1, c1;
	printf("Enter matrix size:\n");
	scanf("%d%d", &r1, &c1);
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("\nLower Triangular\n");
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			if(j>i) {
				printf("0 ");
			}
			else {
				printf("%d ", arr1[i][j]);
			}
		}
		printf("\n");

	}
	printf("\nUpper Triangular\n");
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			if(j>=i) {
				 printf("%d ", arr1[i][j]);
			}
			else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}

