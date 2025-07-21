#include <stdio.h>
#include <stdbool.h>


bool moveCaptain(char gameGrid[5][5], char move){
    int rowC = 0, columnC = 0;
    char canMove = false;
    bool notfound = true ;

    for(int row = 0; row < 5 && notfound; row++){
        for(int column = 0; column < 5 && notfound; column++){
            if(gameGrid[row][column] == 'C') {
                rowC = row;
                columnC = column;
            }
        }
    }
    
    if (move == 'u' && rowC - 1 >= 0) {
        gameGrid[rowC - 1][columnC] = 'C';
        gameGrid[rowC][columnC] = '0';
        canMove = true;
    } else if (move == 'd' && rowC + 1 <= 5) {
        gameGrid[rowC + 1][columnC] = 'C';
        gameGrid[rowC][columnC] = '0';
        canMove = true;
    } else if (move == 'r' && columnC + 1 >= 0) {
        gameGrid[rowC][columnC + 1] = 'C';
        gameGrid[rowC][columnC] = '0';
        canMove = true;
    } else if (move == 'l' && columnC - 1 <= 5) {
        gameGrid[rowC][columnC + 1] = 'C';
        gameGrid[rowC][columnC] = '0';
        canMove = true;
    }
    return canMove;

}
void updateGrid(char gameGrid[5][5]){

    printf("yes\n");
    for(int row = 0; row < 5; row++){
        for (int column = 0; column < 5; column++){
            printf("%c ", gameGrid[row][column]);
        }
        printf("\n");
    }
}

int main() {

    char move;
    bool canMove;
    char gameGrid[5][5] = { 	
        {'C', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0'},
    };

    printf("(u)p\t(d)own\t(r)ight\t(l)eft\nEnter your move : ");
    scanf(" %c", &move);

    canMove = moveCaptain(gameGrid, move);

    if (canMove) updateGrid(gameGrid);
    else printf("No\n");

    return 0;
}
