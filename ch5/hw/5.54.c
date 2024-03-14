#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // for the second ticks, using sleep

int main(){
    int tortoisePos = 1;
    int harePos = 1;
    int randint = 0;
    puts("ON YOUR MARK, GET SET");
    puts("BANG\t\t !!!!");
    puts("AND THEY'RE OFF\t !!!!");
    while(true){
        if (tortoisePos < 1){
            tortoisePos = 1;
        }
        if (harePos < 1){
            harePos = 1;
        }
        //1. If an animal moves past square  70, move the animal back to square 80.
        //???
        if (tortoisePos > 70){
            tortoisePos = 80;
        }
        if (harePos > 70){
            harePos = 80;
        }
        
        //tortoise
        randint = rand()%10+1;
        if ( 1 <= randint && randint <= 5){
            puts("tortoise: fast plod");
            tortoisePos += 3;
        } else if ( 6 <= randint && randint <= 7){
            puts("tortoise: slip");
            tortoisePos -= 6;
        } else if ( 8 <= randint && randint <= 10){
            puts("tortoise: fast plod");
            tortoisePos++;
        } else {
            puts("AND YOU MAY FIND YOURSELF, LIVING IN ANOTHER PART OF THE WORLD");
        }

        //hare
        randint = rand()%10+1;
        if ( 1 <= randint && randint <= 2){
            puts("hare: sleep");
        } else if ( 3 <= randint && randint <= 4){
            puts("hare: big hop");
            harePos += 9;
        } else if ( randint == 5 ){
            puts("hare: big slip");
            harePos -= 12;
        } else if ( 6 <= randint && randint <= 8){
            puts("hare: small hop");
            harePos += 1;
        } else if ( 9 <= randint && randint <= 10){
            puts("hare: small slip");
            harePos += 2;
        } else {
            puts("AND YOU ASK YOURSELF, HOW DID I GET HERE?");
        }

        //rendering
        for(int i = 1; i < 70;i++){
            if (tortoisePos == i){
                if (harePos == i){
                    printf("%s","OUCH!!!");
                    i += 7; // no need to worry about other chars.
                } else {
                    printf("%s","T");
                }
            } else if (harePos == i){
                printf("%s","H");
            } else {
                printf("%s"," ");
            }
        }
        puts("");

        if (tortoisePos >=70 || harePos >=70){
            //incoming winner message
            break;
        }

        sleep(1);
    }
    if (tortoisePos >= 70){
        puts("TORTOISE WINS!!! YAY!!!");
    } else if (harePos >= 70){
        puts("hare wins\n\n\nyay I guess");
    }
    
}