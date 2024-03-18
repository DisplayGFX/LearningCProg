#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUEEN 2
#define OCCUPIED 1

//trying out struct, else it will be hard to create functions to return moves
struct move {
    int x;
    int y;
};

void placeQueen(int,int,int[8][8]);
void displayBoard(int[8][8]);
struct move findMove(int[8][8]);

int main(void){
    srand(time(NULL));
    int board[8][8] = {};
    int fqueen_x = rand() % 8;
    int fqueen_y = rand() % 8;
    printf("First Queen Loc: %d %d\n",fqueen_x,fqueen_y);
    placeQueen(fqueen_x,fqueen_y,board);
    displayBoard(board);
    int placedQueens = 1;
    struct move nextPlay;
    while (placedQueens < 8){
        nextPlay = findMove(board);
        printf("Next Queen: %d, %d\n", nextPlay.x+1,nextPlay.y+1);
        placeQueen(nextPlay.x,nextPlay.y,board);
        displayBoard(board);
        placedQueens++;
    }
}

struct move findMove(int board[8][8]){
    //heuristic: find the next queen move with the
    //least amount of "squares taken" by a placed queen
    int spotsTaken = 0;
    int lowestTaken = 99;
    struct move lowestMove = {-1,-1};
    for(int x = 0;x<8;x++){
        for(int y = 0;y<8;y++){
            if(board[x][y] != 0){
                continue;
            }
            //printf("spot found! %d, %d\n",x+1,y+1);
            //valid queen spot.
            spotsTaken = 0;
            //look familiar?
            //starting with the row.
            for(int i=0;i<8;i++){
                if(board[x][i] != 0 || i == y){
                    continue;
                }
                spotsTaken++;
            }
            //then the column
            for(int i=0;i<8;i++){
                if(board[i][y] != 0 || i == x){
                    continue;
                }
                spotsTaken++;
            }
            //down-left
            for(int j = x + 1, k = y - 1; j < 8 && k > -1; j++, k--){
                if(board[j][k] != 0){
                    continue;
                }
                spotsTaken++;
            }
            //up-left
            for(int j = x - 1, k = y - 1; j > -1 && k > -1; j--, k--){
                if(board[j][k] != 0){
                    continue;
                }
                spotsTaken++;
            }
            //up-right
            for(int j = x - 1, k = y + 1; j > -1 && k < 8; j--, k++){
                if(board[j][k] != 0){
                    continue;
                }
                spotsTaken++;
            }
            //down-right
            for(int j = x + 1, k = y + 1; j < 8 && k < 8; j++, k++){
                if(board[j][k] != 0){
                    continue;
                }
                spotsTaken++;
            }

            //now that the heuristic has been calculated for the cost
            //of placing the queen, lets see if its lower than the current best
            
            if(spotsTaken < lowestTaken){
                lowestTaken = spotsTaken;
                lowestMove.x = x;
                lowestMove.y = y;
                //printf("New Lowest found %d, %d\n",x+1, y+1);
            }
        }
    }
    if(lowestMove.x == -1 || lowestMove.y == -1){
        //this heuristic is not perfect, there are certain queens
        //that will trigger this, so instead of treating this
        //as an invalid state, instead, it will print out that it cant
        //place any more queens

        //puts("SAME AS IT EVER WAS, SAME AS IT EVER WAS");
        puts("Cannot place any more queens, my liege");
        exit(1);
    } else {
        return lowestMove;
    }
}

void placeQueen(int x, int y, int board[8][8]){
    if(board[x][y] == QUEEN || board[x][y] == OCCUPIED){
        puts("ERROR: Invalid move");
        exit(1);
    }
    board[x][y] = QUEEN;
    
    //mark board with all spaces that are occupied
    //starting with the row.
    for(int i=0;i<8;i++){
        if (board[x][i] == QUEEN && i == y){
            continue;
        }else if (board[x][i] == QUEEN && i != y){
            puts("ERROR: Queen is already in row");
            exit(1);
        } else if (board[x][i] == OCCUPIED){
            continue;
        } else {
            board[x][i] = OCCUPIED;
        }
    }
    //then the column
    for(int i=0;i<8;i++){
        if (board[i][y] == QUEEN && i == x){
            continue;
        }else if (board[i][y] == QUEEN && i != x){
            puts("ERROR: Queen is already in column");
            exit(1);
        } else if (board[i][y] == OCCUPIED){
            continue;
        } else {
            board[i][y] = OCCUPIED;
        }
    }
    //down-left
    for(int j = x + 1, k = y - 1; j < 8 && k > -1; j++, k--){
        if (board[j][k] == QUEEN){
            puts("ERROR: Queen is already in diagonal");
            exit(1);
        } else if (board[j][k] == OCCUPIED){
            continue;
        } else{
            board[j][k] = OCCUPIED;
        }
    }
    //up-left
    
    for(int j = x - 1, k = y - 1; j > -1 && k > -1; j--, k--){
        if (board[j][k] == QUEEN){
            puts("ERROR: Queen is already in diagonal");
            exit(1);
        } else if (board[j][k] == OCCUPIED){
            continue;
        } else{
            board[j][k] = OCCUPIED;
        }
    }
    //up-right
    for(int j = x - 1, k = y + 1; j > -1 && k < 8; j--, k++){
        if (board[j][k] == QUEEN){
            puts("ERROR: Queen is already in diagonal");
            exit(1);
        } else if (board[j][k] == OCCUPIED){
            continue;
        } else{
            board[j][k] = OCCUPIED;
        }
    }
    //down-right
    for(int j = x + 1, k = y + 1; j < 8 && k < 8; j++, k++){
        if (board[j][k] == QUEEN){
            puts("ERROR: Queen is already in diagonal");
            exit(1);
        } else if (board[j][k] == OCCUPIED){
            continue;
        } else{
            board[j][k] = OCCUPIED;
        }
    }
}

void displayBoard(int board[8][8]){
    puts("Board\ta b c d e f g h");
    for(size_t x = 0;x < 8; x++){
        printf("%zu\t",x+1);
        for(size_t y = 0; y < 8 ; y++){
            if(board[x][y] == QUEEN){
                printf("%s ","Q");
            } else if (board[x][y] == OCCUPIED){
                printf("%s ","*");
            } else{
                printf("%s ",".");
            }
        }
        puts("");
        
    }
    puts("");
}