#include <stdio.h>


int main(void){
    //fun fact, this is just a ROT13 cypher just applied to digits rather than letters, making it even more insecure!
    int input = 0;
    printf("%s","Enter number to encrypt:");
    scanf("%d",&input);
    if (input < 1000 || input > 9999){
        puts("Input invalid, 4 digits only");
    }
    int fourth = (input/1000)%10;
    int third = (input/100)%10;
    int second = (input/10)%10;
    int first = input%10;
    
    //fun fact, I did this pretty quickly in vscode with a combination of ctrl+shift to multi arrow select, alt+shift to select words rather than characters, ctrl+c to copy
    //another round of ctrl+shift to select the empty templates of `int enc_ = (7*)%10;` and ctrl+v twice to fill in the blanks
    int enc_fourth = (7+fourth)%10;
    int enc_third = (7+third)%10;
    int enc_second = (7+second)%10;
    int enc_first = (7+first)%10;
    
    printf("Your encrypted 4 digits is %d%d%d%d\n",enc_fourth,enc_third,enc_second,enc_first);
}