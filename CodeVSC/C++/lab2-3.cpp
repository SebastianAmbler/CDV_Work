#include <stdio.h>

main() {
	int num;
	printf("Please input number: ");
	scanf("%d", &num);
	
	for (int i = 1; i <= 12; i++) {
		int result = num * i;
		printf("%d * %d is %d\n", num, i, result);
	}
}
