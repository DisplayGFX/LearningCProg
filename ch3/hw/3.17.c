#include <stdio.h>
#include <stdbool.h>
int main(void){
	// initalize value for account number
    int acctnum = 0;
	// initalize value for charges
    float charges = 0;
	// initialize value for credits
    float credits = 0;
	// initalize value for beginning blanace
    float bbalance = 0;
	// initalize value for credit limit
    float limit = 0;
    while (true){
        // ask for account number
        printf("%s","Enter account number (-1 to end):");
        scanf("%d",&acctnum);
		// check if its sentinel value
        if(acctnum == -1){
            // exit if sentinel value
            puts("Exiting Program");
            exit(0);
        }
		// ask for the beginning balance
        printf("%s","Enter beginning balance:");
        // store begining balance value
        scanf("%f",&bbalance);
		// ask for the total of all charges
        printf("%s","Enter total charges:");
        // store total charges value
        scanf("%f",&charges);
		// ask for all credits 
        printf("%s","Enter total credits:");
        // store total of credits
        scanf("%f",&credits);
		// ask for the credit limit
        printf("%s","Enter Credit Limit:");
        // store credit limit
        scanf("%f",&limit);
		// calculate if the limit has been exceeded
        if((charges + bbalance - credits) > limit){
            // print account info if it has been exceeded
            printf("Account number:\t%d\n",acctnum);\
            printf("Credit Limit:\t%.2f\n",limit);
            printf("Balance:\t%.2f\n",(charges+bbalance-credits));
            puts("Credit Limit Exceeded");
        }
    }
}