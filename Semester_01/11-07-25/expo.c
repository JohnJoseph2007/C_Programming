#include<stdio.h>
void expo(int*,int*,float*);
int main() {
	int x,y,*xp,*yp;
	float e,*ep;
	xp=&x; yp=&y; ep=&e;
	printf("Enter base and exponent:\n");
	scanf("%d%d", xp, yp);
	expo(xp,yp,ep);
	printf("Result: %f",*ep);
}
void expo(int *a, int *b, float *r) {
	if(*b>0) {
		*r=1.0;
		for(int i=1;i<=*b;i++) {
			*r*=*a;
		}
	} else if(*b<0) {
		*r=1.0;
		for(int i=1;i<=-(*b);i++) {
			*r*=(1.0/(*a));
		}
	} else {
		*r = 1.0;
	}
}


