#include <stdio.h>
#include <string.h>


struct St {
	char name[50];
	int age;
	float grade;
};

main() {
	struct St st1, st2;
	strcpy(st1.name, "Sudlor");
	st1.age = 50;
	st1.grade = 0.25;
	printf("Name: %s\n", st1.name);
	printf("Age: %d\n", st1.age);
	printf("Grade: %.2f\n", st1.grade);
	
	strcpy(st2.name, "Sudthep");
	st2.age = 8;
	st2.grade = 4.52;
	printf("Name: %s\n", st2.name);
	printf("Age: %d\n", st2.age);
	printf("Grade: %.2f\n", st2.grade);
}
