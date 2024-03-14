#include <stdio.h>
#include <string.h>


void printRightTri(int,char);
void printTri(int,int,char);
void printRect(int,int,char);
void printRhombus(int,int,char);
void print5PointStar(int,char);
void printDiamond(int,char);

int main(void){
    printRightTri(5,'$');
    puts("");
    printTri(10,11,'@'); 
    puts("");
    printRect(4,5,'#');
    puts("");
    printRhombus(5,5,'?');
    puts("");
    print5PointStar(10,'*');
    puts("");

}

void printRightTri(int height, char fillCharacter){ //right triangle for extra credit (and not cause I realized the path was different)
    for(int i = 0;i<height;i++){
        for(int j = 0;j<i;j++){
            printf("%c",fillCharacter);
        }
        puts("");
    }
}

void printTri(int height, int base, char fillCharacter){ // isoceles
    int midpoint = base / 2;
    int start = midpoint;
    int end = midpoint;

    for(int i = 0;i<height;i++){

        //this took a hot second to get right
        double heigthPer = ((double)i)/(double)height;
        int offset = (int)((midpoint+1)*heigthPer);

        for(int j = 0;j<base;j++){
            if(j < (midpoint - offset) || j > (midpoint + offset)){
                printf("%c",' ');
            } else {
                printf("%c",fillCharacter);
            }
        }
        puts("");
    }
}

void printRect(int width,int len,char fillCharacter){
    for(int i = 0;i<width;i++){
        for(int j = 0;j<len;j++){
            printf("%c",fillCharacter);
        }
        puts("");
    }
}

void printRhombus(int height, int width, char fillCharacter){ // technically a diamond, so I am counting it!
    int midpoint = width / 2;
    int midheight = height / 2;
    int start = midpoint;
    int end = midpoint;

    for(int i = 0;i<height;i++){

        
        if (i <= midheight){
            double heigthPer = ((double)i)/((double)height/2);
            int offset = (int)((midpoint+1)*heigthPer);
            for(int j = 0;j<width;j++){
                if(j < (midpoint - offset) || j > (midpoint + offset)){
                    printf("%c",' ');
                } else {
                    printf("%c",fillCharacter);
                }
            }
        } else {
            double heigthPer = (height-(double)i)/((double)height);
            int offset = (int)((midpoint+1)*heigthPer);
            for(int j = width;j>0;j--){
                //printf("%d %d",(midpoint - offset),(midpoint + offset));
                if((j-1) < (midpoint - offset) || (j-1) > (midpoint + offset)){
                    printf("%c",' ');
                } else {
                    printf("%c",fillCharacter);
                }
            }
        }



        puts("");
    }
}


// okay, you know what, Im just scaling it now
// also, this sucked to figure out on my own, so I am doing just "stick stars"
//it made my head hurt ow

void print5PointStar(int size, char fillCharacter) {
    int center = size / 2;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (j == center && i <= center) {
                printf("%c", fillCharacter);
            } else if (i == center){
                printf("%c", fillCharacter);
            } else if (i > center) {
                double spread = (double)(i - center) / (center) * center;
                int start = (int)(center - spread);
                int end = (int)(center + spread);
                if (j == start || j == end) {
                    printf("%c", fillCharacter);
                } else {
                    printf(" ");
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
