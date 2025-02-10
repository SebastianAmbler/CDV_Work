#include <stdio.h>
#define PI 3.141592653



main() {
	char name[30] = "Sarunnuttapong Ambler";
	char gender[6] = "Male";
	int age = 15;
	float gpa = 3.82;
	printf("Hello, ");
	printf("%s\n", name);
	printf("You are %d years old \n", age);
	printf("You are a %s \n", gender);
	printf("Your GPA is %.2f \n", gpa);
	printf("www.cdti.ac.th\a\n");
	printf("PI = %.9f\n", PI);
}
