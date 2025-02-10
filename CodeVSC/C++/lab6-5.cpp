#include <stdio.h>
#include <string.h>
#include <ctype.h>
float result;

struct table {
	char menu[50];
	int price;
}; struct table t[6];

void menu() {
	printf("--------- Menu --------- \n");
	for (int i = 0; i < 5; i++) {
		printf("%d. %-9s -->   %d$\n", i + 1, t[i].menu, t[i].price);
	}
	printf("Please select a menu. If you are finished, please type 0 \n\n");
}

void calc(int order) {
	if (order >= 0 && order <= 4) {
		printf("You have ordered %s, which is %d$.\n", t[order].menu, t[order].price);
		float tax = t[order].price * 0.07;
		result += tax + t[order].price;
	} else printf("Your order is not on the menu\n");
}

int main() {
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
	int input;
	
	menu();
	
	while (1) {
	    scanf("%d", &input);
	    if (input == 0) break;
	    calc(input - 1);
	}
	
	printf("Your total is %.2f$\n", result);
	return 0;
}
