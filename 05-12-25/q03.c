//WAP to create a structure based on a student, and declare it. Use an array to store the details for multiple students and display them.

#include<stdio.h>

struct Student {
	char name[40];
	int roll;
	float marks;
};

int main() {
	struct Student st[30];
	int size;
	printf("Enter number of students: ");
	scanf("%d", &size);
	for(int i=0; i<size; i++) {
		printf("Enter name: ");
		scanf(" %[^\n]s", st[i].name);
		printf("Enter roll number: ");
		scanf(" %d", &st[i].roll);
		printf("Enter marks: ");
		scanf(" %f", &st[i].marks);
	}
	printf("\nDetails:");
	for(int i=0; i<size; i++) {
		printf("\nName: %s\nRoll: %d\nMarks: %f\n", st[i].name, st[i].roll, st[i].marks);
	}
}
