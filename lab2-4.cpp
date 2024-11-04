#include <stdio.h>

main() {
	int num, ans, i;
	printf("Please input number: ");
	scanf("%d", &num);
	
	while (i < 60) {
		i++;
		ans = num * i;
		printf("%d * %d = %d\n", num, i, ans);
	}
	
}