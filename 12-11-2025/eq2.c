#include<stdio.h>
int delete(int*,int);

int main()
{
	//COPY the array, Remove duplicates, count duplicates in original array;	
	int a[30], size, a2[30], *x1, *x2, b, newsize;
	x1 = a; x2 = a2;
	printf("Enter size: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter value: ");
		scanf("%d", &b);
		a[i] = b;
		a2[i] = b;
	}
	newsize=delete(x2, size);
	for(int i=0; i<newsize; i++) {
		b = 0;
		for(int j=0; j<size; j++) {
			if(a2[i]==a[j]) {
				b++;
			}
		}
		printf("Frequency of %d is %d\n", a2[i], b);
	}
}

int delete(int *a, int size)
{
	int cval,i=0;
	//DUPLICATE DELETION:
	while(i<size) {
		cval = 0;
		for(int j=0; j<i; j++) { //NO NEED TO HAVE CONDITION i<=j BECAUSE EXPECTING NO REPEATS ONLY **BEFORE** j
			if (*(a+i)==*(a+j)) { //NO NEED TO CHECK i!=j BECAUSE EXPECTING FIRST TIME VALUE AT j ANYWAYS
				//DELETION
				size--;
				for(int k=i; k<size; k++) {
					*(a+k) = *(a+k+1);
				}
				cval=1;
			}
		}
		if(cval==0) {
			i++;
		}
	}
	return size;
}
