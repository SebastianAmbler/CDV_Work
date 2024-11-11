#include <stdio.h>

int calculate(int s1, int s2, int s3, int s4);
char grade(int score);

main() {
	int ss1, ss2, ss3, ss4;
	printf("Please enter your credits. (50)\n");
	scanf("%d", &ss1);
	printf("Please enter your behavioral score. (10)\n");
	scanf("%d", &ss2);
	printf("Please enter your midterms. (20)\n");
	scanf("%d", &ss3);
	printf("Please enter your finals. (20)\n");
	scanf("%d", &ss4);
	printf("Your grade is %c\nYour final score is %d", grade(calculate(ss1, ss2, ss3, ss4)), calculate(ss1, ss2, ss3, ss4));
}

int calculate(int s1, int s2, int s3, int s4) {
	return(s1 + s2 + s3 + s4);
}

char grade(int score) {
	if (score <= 100 && score >= 80) {
		return('A');
	} else if (score < 80 && score >= 70) {
		return('B');
	} else if (score < 70 && score >= 60) {
		return('C');
	} else if (score < 60 && score >= 50) {
		return('D');
	} else if (score < 50 && score > 0) {
		return('F');
	}
}