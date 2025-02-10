#include <stdio.h>

int calc(int dec);
int calc1(int dec);
int calc2(int dec);

main() {
	int num;
	printf("Please insert your number. ");
	scanf("%d", &num);
	calc(num);
	calc1(num);
	calc2(num);
}

int calc(int dec) {
	int bin;
	printf("Binary Answer:" );
	do {
		bin = dec % 2;
		dec = dec/2;
		printf("%d", bin);
	} while(dec > 0);
}

int calc1(int dec) {
	int bin;
	printf("\nOcta Answer:");
	do {
		bin = dec % 8;
		dec = dec/8;
		printf("%d", bin);
	} while(dec > 0);
}	

int calc2(int dec) {
	int hex[100], i= 0;
	printf("\nHexa Answer:");
    do{	
        hex[i] = dec % 16;
        dec /= 16;
        i++;    
    }while(dec > 0);

	 for(int j = i - 1; j >= 0; j--) {
        switch(hex[j])
        {
            case 15: printf("F"); break;
            case 14: printf("E"); break;
            case 13: printf("D"); break;
            case 12: printf("C"); break;
            case 11: printf("B"); break;
            case 10: printf("A"); break;
            default: printf("%d", hex[j]);
        }   
    }
}
