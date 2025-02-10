#include <stdio.h>
#include <string.h>

main(){
	char username[10] = "admin", userenter[50];
	int password = 1234, passenter;
	st1:
	printf("Enter your username\n");
	scanf("%s", &userenter);

	if (strcmp(username, userenter) == 0) {
		printf("Enter your password.\n");
	} else {
		printf("Error.");
		goto st1;
	}
	
	scanf("%d", &passenter);
	
	if (passenter == password) {
		printf("Correct.");
	} else {
		printf("Error.");
		return(0);
	}
}
