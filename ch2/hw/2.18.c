#include <stdio.h>
#include <stdlib.h>

int main(void){
	int integer1 = 0;
	int integer2 = 0;
	int bigger = 0;
	puts("Enter in the first number:");
	scanf("%d", &integer1);
	puts("Enter in the second number:");
	scanf("%d", &integer2);
	if ( integer1 == integer2 ) {
		puts("These numbers are equal.");
		exit(0);
	}
	if ( integer1 > integer2 ) {
		bigger = integer1;
	}
	if ( integer1 < integer2 ) {
		bigger = integer2;
	}
	printf("%d is bigger");
	exit(0);
}