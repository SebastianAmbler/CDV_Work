#include <stdio.h>

main() {
	int num, ans, i = 13;
	printf("Please input number: ");
	scanf("%d", &num);
	
	do {
		i++;
		ans = num * i;
		printf("%d * %d = %d\n", num, i, ans);
	}
	while (i < 12);
	
}
