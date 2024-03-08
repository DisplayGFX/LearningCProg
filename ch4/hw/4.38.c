#include <stdio.h>

int main(void){
    for(int x = 1; x <=12;x++){
        printf("On the ");
        switch (x){
            case 1:
                printf("%s","first");
                break;
            case 2:
                printf("%s","second");
                break;
            case 3:
                printf("%s","third");
                break;
            case 4:
                printf("%s","fourth");
                break;
            case 5:
                printf("%s","fifth");
                break;
            case 6:
                printf("%s","sixth");
                break;
            case 7:
                printf("%s","seventh");
                break;
            case 8:
                printf("%s","eighth");
                break;
            case 9:
                printf("%s","ninth");
                break;
            case 10:
                printf("%s","tenth");
                break;
            case 11:
                printf("%s","eleventh");
                break;
            case 12:
                printf("%s","twelfth");
                break;
        }
        printf("%s", " day of christmas, my true love gave to me:\n");
        switch(x){
            case 12:
                printf("%s","12 drummers drumming, ");
            case 11:
                printf("%s","11 pipers piping, ");
            case 10:
                printf("%s","ten lords a-leaping, ");
            case 9:
                printf("%s","nine ladies dancing, ");
            case 8:
                printf("%s","eight maids a-milking, ");
            case 7:
                printf("%s","seven swans a-swimming, ");
            case 6:
                printf("%s","six geese a-laying, ");
            case 5:
                printf("%s","five gold rings, ");
            case 4:
                printf("%s","four calling birds, ");
            case 3:
                printf("%s","three French hens, ");
            case 2:
                printf("%s","two turtle doves and ");
            case 1:
                printf("%s","a partridge in a pear tree.");
        }
        puts("");
        puts("");
    }
}