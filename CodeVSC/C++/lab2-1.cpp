#include <stdio.h>

char* calculate(int points) {
	if (points <= 100 && points >= 80) {
		return("A");
	} else if (points < 80 && points >= 70) {
		return("B");
	} else if (points < 70 && points >= 60) {
		return("C");
	} else if (points < 60 && points >= 50) {
		return("D");
	} else if (points < 50 && points > 0) {
		return("F");
	} else {
		return("Not valid");
	}
}

main() {
	float points;
	char* grade;
	printf("Please enter your points ");
	scanf("%f", &points);
	printf("You have %.1f points \n", points);
	grade = calculate(points);
	printf("Your grade is %s", grade);
}
