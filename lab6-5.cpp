#include <stdio.h>
#include <string.h>

//prices
struct table {
	char menu[50];
	int price;
}; struct table t[6];

void menu() {
	printf("------ Drink Menu ------ \n");
	printf("1. %s     -->   %d$\n", t[0].menu, t[0].price);
	printf("2. %s	  -->   %d$\n", t[1].menu, t[1].price);
	printf("3. %s     -->   %d$\n", t[2].menu, t[2].price);
	printf("4. %s     -->   %d$\n", t[3].menu, t[3].price);
	printf("5. %s     -->   %d$\n", t[4].menu, t[4].price);
	printf("------------------------ \n");
	printf("Please select a menu: \n");
}

float calc2(float money, int total) {
	float change = money - total;
	return change;
}

float tax(float money) {
	int amount = money * 7/100;
	return money + amount;
}

main() {
	menu();
	struct table t[6];
	strcpy(t[0].menu, "Pasta");
	t[0].price = 45;
	strcpy(t[1].menu, "Spaghetti");
	t[1].price = 60;
	strcpy(t[2].menu, "Lasagna");
	t[2].price = 130;
	strcpy(t[3].menu, "Tiramisu");
	t[3].price = 180;
	strcpy(t[4].menu, "Red Wine");
	t[4].price = 350;
	int select, result;
	float change, money;
	
	
	scanf("%d", &select);
	select--;
	result = tax(t[select].price);
	printf("Your total is %d$\n", result);
	printf("How much would you like to pay?\n");
	scanf("%f", &money);
	change = calc2(money, result);
	printf("Your change is %.2f$", change);
	
}