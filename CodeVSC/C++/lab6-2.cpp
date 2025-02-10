#include <stdio.h>
#include <string.h>


struct ST {
	char name[50];
	int age;
	float grade;
};

main() {
	struct ST st[2];
	strcpy(st[0].name, "Sudlor");
	st[0].age = 50;
	st[0].grade = 0.25;
	strcpy(st[1].name, "Sudthep");
	st[1].age = 8;
	st[1].grade = 4.52;
	
	for (int i = 0; i < 2; i++) {
		printf("Name: %s\n", st[i].name);
		printf("Age: %d\n", st[i].age);
		printf("Grade: %.2f\n", st[i].grade);
	}
}
