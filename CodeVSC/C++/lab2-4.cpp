#include <stdio.h>

main() {
	int num, ans, i = 13;
	printf("Please input number: ");
	scanf("%d", &num);
	
	while (i < 12) {
		i++;
		ans = num * i;
		printf("%d * %d = %d\n", num, i, ans);
	}
}
