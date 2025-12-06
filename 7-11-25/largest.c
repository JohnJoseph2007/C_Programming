#include<stdio.h>
void largest(int*, int*, int*, int*);
int main()
{
	int a,b,c, *ap,*bp,*cp, l,*lp;
	ap=&a; bp=&b; cp=&c; lp=&l;
	printf("Enter 3 numbers:\n");
	scanf("%d%d%d", ap, bp, cp);
	largest(ap,bp,cp,lp);
	printf("Largest = %d", *lp);
}
void largest(int *a, int *b, int *c, int *l)
{
	*l = (*a>*b)?((*a>*c)?*a:*c):((*b>*c)?*b:*c);
}
