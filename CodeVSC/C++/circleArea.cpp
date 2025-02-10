#include <stdio.h>
#include <cmath>
const float pi = 3.14;

float calculate(float radius) {
	float result = pi*pow(radius, 2);
	return result;
}

main() {
	float radius, area;
	printf("Welcome to the circle area calculator.");
	printf("\nPlease enter your radius.\n");
	scanf("%f", &radius);
	area = calculate(radius);
	printf("The area of your circle is %.2f cm^2", area);
}
