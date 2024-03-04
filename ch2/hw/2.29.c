#include <stdio.h>
#include <stdlib.h>


int main(void){
    int input1 = 0;
    int input2 = 0;
    int input3 = 0;
    puts("Enter in the first number:");
	scanf("%d", &input1);
	puts("Enter in the second number:");
	scanf("%d", &input2);
    puts("Enter in the second number:");
	scanf("%d", &input3);
    if (input1 == input2 || input2 == input3 || input3 == input1){
        puts("program does not work if any numbers are equal");
        exit(1);
    }
    //using only if statements
    //but the smart way is to nest them.
    //though with storage, I feel like theres an even smarter way
    if (input1 < input2 && input1 < input3) { // input1 is smallest
        printf("%d\t",input1);
        if (input2 < input3){ //input2 is the middle
            printf("%d\t",input2);
            printf("%d\t",input3); // knowing these two facts tells us the last number
        }
        if (input2 > input3){ //input3 is the middle
            printf("%d\t",input3);
            printf("%d\t",input2); // knowing these two facts tells us the last number
        }
    }
    if (input2 < input1 && input2 < input3) { // input2 is smallest
        printf("%d\t",input2);
        if (input1 < input3){ //input1 is the middle
            printf("%d\t",input1);
            printf("%d\t",input3); // knowing these two facts tells us the last number
        }
        if (input1 > input3){ //input3 is the middle
            printf("%d\t",input3);
            printf("%d\t",input1); // knowing these two facts tells us the last number
        }
    }
    if (input3 < input1 && input3 < input2) { // input1 is smallest
        printf("%d\t",input3);
        if (input1 < input2){ //input1 is the middle
            printf("%d\t",input1);
            printf("%d\t",input2); // knowing these two facts tells us the last number
        }
        if (input1 > input2){ //input2 is the middle
            printf("%d\t",input2);
            printf("%d\t",input1); // knowing these two facts tells us the last number
        }
    }
    printf("%s","\n");
}