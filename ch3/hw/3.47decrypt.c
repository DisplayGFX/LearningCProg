#include <stdio.h>


int main(void){
    int input = 0;
    printf("%s","Enter number to decrypt:");
    scanf("%d",&input);
    if (input < 1000 || input > 9999){
        puts("Input invalid, 4 digits only");
    }
    int fourth = (input/1000)%10;
    int third = (input/100)%10;
    int second = (input/10)%10;
    int first = input%10;

    //adding 10 adds a buffer in case it goes negative, but with the modulo its effectively multiplying the output by 1
    int dec_fourth = (fourth+10-7)%10;
    int dec_third = (third+10-7)%10;
    int dec_second = (second+10-7)%10;
    int dec_first = (first+10-7)%10;
    
    printf("Your decrypted 4 digits is %d%d%d%d\n",dec_fourth,dec_third,dec_second,dec_first);
}