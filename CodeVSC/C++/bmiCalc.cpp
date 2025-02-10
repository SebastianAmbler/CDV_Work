#include <stdio.h>
#include <cmath>

float calculate(float weight, float height) {
	float result = weight/pow(height, 2);
	return result;
}

main() {
	float weight, height, bmi;
	printf("Welcome to the BMI calculator.");
	printf("\nPlease enter your weight. ");
	scanf("%f", &weight);
	printf("\nPlease enter your height in centimeters. ");
	scanf("%f", &height);
	height = height/100;
	bmi = calculate(weight, height);
	printf("Your BMI is %.2f.\n", bmi);
	
	if (bmi < 18.5) {
		
		printf("You are underweight.");
		
	} else if (bmi >= 18.5 && bmi < 24.9) {
		
		printf("You are normal.");
		
	} else if (bmi > 25 && bmi < 29.9) {
		
		printf("You are fat, please go on a diet.");
		
	} else if (bmi > 30) {
		
		printf("You are obese, please consult a doctor.");
		
	}
}
