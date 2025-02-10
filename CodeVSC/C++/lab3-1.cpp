#include <stdio.h>
#include <string.h>

main () {
	char str1[30] = "My birthday ";
	char str2[30] = "5 February 2009";
	char str3[30];
	strcat(str1, str2);
	strcat(str3, str1);
	printf("str1 = %s\n", str1);
	printf("str3 = %s\n", str3);
}
