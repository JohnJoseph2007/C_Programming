//WAP to create a structure based on a student, and declare it. Use its pointers to take input for its values and display it.

#include<stdio.h>

struct Student {
	char name[40];
	int roll;
	float marks;
};

int main() {
	struct Student st, *st1;
	st1 = &st;
	printf("Enter name: ");
	scanf(" %[^\n]s", st1->name);
	printf("Enter roll number: ");
	scanf(" %d", &st1->roll);
	printf("Enter marks: ");
	scanf(" %f", &st1->marks);
	printf("\nDetails:\nName: %s\nRoll: %d\nMarks: %f\n", st1->name, st1->roll, st1->marks);
}
