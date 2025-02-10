#include <stdio.h>
#include <string.h>


struct ST {
	char name[50];
	int age;
	float grade;
};

main() {
	FILE *file = fopen("C:\\Users\\sebas\\Downloads\\student.txt", "w");
	if (file == NULL) {
		printf("Could not open file.");
	}
	
	struct ST st[6];
	for (int i = 0; i < 6; i++) {
		printf("Student number:%d", i + 1);
		printf("\nPlease input the students name: ");
		scanf("%s", &st[i].name);
		printf("Please input the students age: ");
		scanf("%d", &st[i].age);
		printf("Please input the students grade: ");
		scanf("%f", &st[i].grade);
		printf("\n");
	}
		
	for (int i = 0; i < 6; i++) {
		printf("\nName: %s\n", st[i].name);
		printf("Age: %d\n", st[i].age);
		printf("Grade: %.2f\n", st[i].grade);
		
		fprintf(file, "\nName: %s\n", st[i].name);
		fprintf(file, "Age: %d\n", st[i].age);
		fprintf(file, "Grade: %.2f\n", st[i].grade);
	}
	
	fclose(file);
	
}
