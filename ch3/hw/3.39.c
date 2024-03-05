#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i = 0;
    while (i < 100){
        if (i % 16 == 0){ // returns true if i is multiple of 16
            puts("");
        }
        //on odd lines, we want the lines to start with *
        //on even lines, we want the lines to start with " "
        //so really, its if the result from x/16 is odd or even (adding one to align parity)
        //since its all ints, theres no remainder or fractional amount, just the resultant

        //logic, more formal with above observations
        //if c
        //  if (i/16) % 2 == 0
        //      print *
        //  else
        //      print " "
        //if i%2 != 0
        //  if (i/16) % 2 == 0
        //      print " "
        //  else
        //      print *

        //condensing logic to one line each
        // if ((i%2 == 0)&&((i/16) % 2 == 0))||((i%2 != 0)&&(if (i/16) % 2 != 0))
        //   print *
        // if ((i%2 != 0)&&((i/16) % 2 == 0))||((if (i/16) % 2 == 0)&&((i/16) % 2 == 0))
        //   print " "

        //for easier reading/debugging
        if (
                ((i%2 == 0)
                &&
                ((i/16) % 2 == 0))
            ||
                ((i%2 != 0)
                &&
                ((i/16) % 2 != 0))
            ){
            printf("%s","*");
        } else {
            printf("%s"," ");
        }
        i++;
    }
}