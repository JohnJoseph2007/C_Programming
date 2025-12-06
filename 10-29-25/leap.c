#include<stdio.h>
void leap(int);
int main() {
	int yr;
	printf("Enter year: ");
	scanf("%d", &yr);
	leap(yr);
}
void leap(int x) {
	(x%4==0 && x%100!=0)?printf("Leap"):printf("Non-leap");
}


