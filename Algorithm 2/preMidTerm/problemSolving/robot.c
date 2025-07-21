#include <stdio.h>
#include <stdbool.h>

char grid[4][4] = {

    {'R', '.', '.', '.'},   //row 1
    {'.', '.', '.', '.'},   //row 2
    {'.', '.', 'W', '.'},   //row 3
    {'.', '.', '.', '.'}    //row 4

};

bool canMove(int row, int column, char grid[4][4]) {

    if(row >= 0 && row < 4 && column >= 0 && column < 4 && grid[row][column] == '.') {
        return true;
    }

    return false;
}

void makeMove(char move[4], char gird[4][4]){
    int rowRobot = 0;
    int columnRobot = 0 ;
    bool valid = false;

    for(int i = 0; i < 4 ; i++){

        int moveRowRobot = rowRobot;
        int moveColumnRobot = columnRobot;

        if(move[i] == 'U') moveRowRobot-- ;
        else if(move[i] == 'D') moveRowRobot++ ; 
        else if(move[i] == 'R') moveColumnRobot++ ;
        else moveColumnRobot-- ;

        valid = canMove(moveRowRobot, moveColumnRobot, grid);



        if(valid) {

            grid[moveRowRobot][moveColumnRobot] = 'R' ;
            grid[rowRobot][columnRobot] = '.' ;

        }else break;

        rowRobot = moveRowRobot;
        columnRobot = moveColumnRobot;

    }

    if (valid) printf("Mission COMPLETED. Final position: (%d, %d)\n", rowRobot, columnRobot);
    else printf("Mission FAILD. Final position: (%d, %d)\n", rowRobot, columnRobot);

    for(int row = 0 ; row < 4; row++){
        for(int column = 0 ; column < 4; column++){

            printf("%c", grid[row][column]);

        }

        printf("\n");

    }

}

int main() {

    char move[5] = {'R', 'R', 'D', 'D'};

    makeMove(move, grid);

    return 0;
}