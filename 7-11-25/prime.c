#include<stdio.h>
void pr(int*,int*);
int main()
{
	int a,*ap, p=0,*pp;
	ap=&a; pp=&p;
	printf("Enter a number: ");
	scanf("%d", ap);
	pr(ap, pp);
	printf("%d\n", *pp);
	(*pp==2)?printf("Prime"):printf("Composite");
}
void pr(int *a, int *b)
{
	for(int i=1; i<=*a; i++) {
		if((*a)%i==0){
			(*b)++;
		}
	}
}

