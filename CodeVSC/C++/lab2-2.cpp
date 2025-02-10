#include <stdio.h>

void menu() {
	printf("------ Drink Menu ------ \n");
	printf("1. Fanta     -->   15$\n");
	printf("2. Pepsi     -->   25$\n");
	printf("3. Singcha   -->   65$\n");
	printf("4. Heineken  -->   75$\n");
	printf("5. Red Wine  -->   200$\n");
	printf("------------------------ \n");
	printf("Please select a menu: \n");
}

int calc(int menuselect) {
	switch(menuselect) {
		case 1:
			return 15;
			break;
		case 2:
			return 25;
			break;
		case 3:
			return 65;
			break;
		case 4:
			return 75;
			break;
		case 5:
			return 200;
			break;
		default:
			return 0;
			break;
	}
}

float calc2(float money, int total) {
	float change = money - total;
	return change;
}

main() {
	int menuselect, result;
	float change, money;
	menu();
	scanf("%d", &menuselect);
	result = calc(menuselect);
	printf("Your total is %d$\n", result);
	printf("How much would you like to pay?\n");
	scanf("%f", &money);
	change = calc2(money, result);
	printf("Your change is %.2f$", change);
	
}
