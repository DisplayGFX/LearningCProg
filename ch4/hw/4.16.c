    #include <stdio.h>

    int main(void){
        // assuming that each part is one printf
        //a
        for (int i = 1;i<=10;i++){
            for(int j = 1;j<=i;j++){
                if (j <= i){
                    printf("%s","*");
                }
            }
            puts("");
        }

        puts("");

        //b
        for (int i = 10;i>0;i--){
            for(int j = 1;j<=i;j++){
                if (j <= i){
                    printf("%s","*");
                }
            }
            puts("");
        }

        puts("");

        //c
        for (int i = 1;i<=10;i++){
            for(int j = 0;j<=10;j++){
                if (j < i){
                    if (!(j==0)){
                        printf("%s"," ");
                    }
                } else {
                    printf("%s","*");
                }
            }
            puts("");
        }

        puts("");

        //d
        for (int i = 10;i>0;i--){
            for(int j = 1;j<=10;j++){
                if (j >= i){
                    printf("%s","*");
                } else {
                    printf("%s"," ");
                }
            }
            puts("");
        }

        
    }