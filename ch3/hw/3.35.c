#include <stdio.h>
#include <stdlib.h>

int main(void){
    int binary = 0;
    printf("%s","Enter binary number to get decimal:");
    scanf("%d",&binary);
    if (binary > 11111){
        puts("input outside of range");
        exit(0);
    }
/* debugging to get all digits
    printf("first digit %d\n",binary/10000);
    printf("second digit %d\n",(binary/1000)%10);
    printf("third digit %d\n",(binary/100)%10); 
    printf("fourth digit %d\n",(binary/10)%10);
    printf("fifth digit %d\n",binary%10);
*/

    int fifth = binary/10000;
    int fourth = (binary/1000)%10;
    int third = (binary/100)%10;
    int second = (binary/10)%10;
    int first = binary%10;

    //this block passes even if theres only one binary digit, as below math will still return 0 for the missing digits, and thus still pass
    if (!( // not
    (fifth == 0 || fifth == 1) &&
    (fourth == 0 || fourth == 1) &&
    (third == 0 || third == 1) &&
    (second == 0 || second == 1) &&
    (first == 0 || first == 1)
    )){
        puts("digit not binary");
        exit(0);
    }

    int decimal = (fifth * 2*2*2*2) + (fourth * 2*2*2) + (third * 2*2) + (second * 2) + (first * 1);

    printf("Here is the number in decimal %d",decimal);

}

