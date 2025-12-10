#include<stdio.h>
int main()
{
	int arr[20], c,i=0, size, cval, cind;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &arr[i]);
	}
	//DUPLICATE DELETION:
	while(i<size) {
		cval=0;
		for(int j=i+1; j<size; j++) { //NO NEED TO HAVE CONDITION i<=j BECAUSE EXPECTING NO REPEATS ONLY **BEFORE** j
			if (arr[i]==arr[j]) { //NO NEED TO CHECK i!=j BECAUSE EXPECTING FIRST TIME VALUE AT j ANYWAYS
				//DELETION
				size--;
				for(int k=j; k<size; k++) {
					arr[k] = arr[k+1];
				}
				cval=1;
			}
		}
		if(cval==0) {
			i++;
		}
	}
	//PRINTING
	for(int i=0; i<size; i++) {
		printf("%d\t", arr[i]);
	}
}
