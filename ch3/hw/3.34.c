#include <stdio.h>
#include <stdlib.h>

int main(void){
    int pal = 0;
    printf("%s","Enter number to check for palindrome:");
    scanf("%d",&pal);
    if (pal < 10000 || pal > 99999 ){
        puts("input outside of range");
        exit(0);
    }

    //logic
    //if first digit is equal to last digit
    //AND
    //if second digit equal to 4th digit

    // w\ remainders
    // 1=5: pal%10 == pal/10000
    // and
    // 4=2: (pal/10)%10 == (pal/1000)%10
    
    /* debugging    
    printf("first digit %d\n",pal/10000);
    printf("second digit %d\n",(pal/1000)%10);
    printf("fourth digit %d\n",(pal/10)%10);
    printf("fifth digit %d\n",pal%10);
    */

   //combining logic
   // (pal%10 == pal/10000) && ((pal/10)%10 == (pal/1000)%10)

   if ((pal%10 == pal/10000) && ((pal/10)%10 == (pal/1000)%10)){
    puts("Number is palindrome");
   } else {
    puts("Number is not palindrome");
   }
}