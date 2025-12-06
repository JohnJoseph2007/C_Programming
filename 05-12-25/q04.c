// WAP to create an employee address structure that uses a nested structure to define the employee's address. Take inputs for each value and display them.

#include<stdio.h>
struct Employee {
	char name[30];
	int id;
	float salary;
	struct Address {
		char city[30];
		int pincode;
	}ad;
};
int main() {
	struct Employee emp1;
	printf("Enter name: ");
	scanf("%[^\n]s", emp1.name);
	printf("Enter ID: ");
	scanf("%d", &emp1.id);
	printf("Enter salary: ");
	scanf("%f", &emp1.salary);
	printf("Enter city name: ");
	scanf(" %[^\n]s", emp1.ad.city);
	printf("Enter pincode: ");
	scanf("%d", &emp1.ad.pincode);

	printf("\nDETAILS:\n");
	printf("Name: %s\nID: %d\nSalary: %f\nCity: %s\nPIN: %d\n", emp1.name, emp1.id, emp1.salary, emp1.ad.city, emp1.ad.pincode);
}
