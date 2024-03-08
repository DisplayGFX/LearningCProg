#include <stdio.h>

int main(void){
    for (int a = 1; a < 500;a++){
        for (int b = 1;b < 500;b++){
            for (int c = 1;c < 500; c++){
                if( //yes, they said "side 1, side 2, hypotenuse", but by the time I caught that, I already had this code in hand
                    ((a*a+b*b) == c*c)||
                    ((b*b+c*c) == a*a)||
                    ((a*a+c*c) == b*b)
                ){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
}