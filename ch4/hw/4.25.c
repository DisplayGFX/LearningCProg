#include <stdio.h>
#include <stdbool.h>



int main(void){
    puts("number\tbinary\t\toctal\thex");
    int carry = 0;
    for(int i = 1;i<=256;i++){
        printf("%d\t",i);
        carry = i;
        while(true){
            printf("%d",carry%2);
            carry = carry/2;
            if (carry <= 0){
                break;
            }
        }

        if(i>127){//formatting
            printf("%s","\t");
        } else {
            printf("%s","\t\t");
        }
        printf("%o\t",i);
        printf("%X\t",i);
        puts("");
        
    }
}
