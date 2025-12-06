#include<stdio.h>
int main()
{
	int arr[20], size, cval, cind;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	//DUPLICATE DELETION:
	for(int i=0; i<size; i++) {
		cval = arr[i];
		for(int j=0; j<i; j++) { //NO NEED TO HAVE CONDITION i<=j BECAUSE EXPECTING NO REPEATS ONLY **BEFORE** j
			if (cval==arr[j]) { //NO NEED TO CHECK i!=j BECAUSE EXPECTING FIRST TIME VALUE AT j ANYWAYS
				//DELETION
				for(int k=i; k<size; k++) {
					arr[k] = arr[k+1];
				}
				size--;
			}
		}
	}
	//PRINTING
	for(int i=0; i<size; i++) {
		printf("%d\t", arr[i]);
	}
}
