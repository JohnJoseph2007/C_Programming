//Print the numbers divisible by 3 but not 7 in the range 1-500
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=500;i++) {
		if(i%3==0 && i%7!=0) {
			printf("%d\n",i);
		}
	}
}

