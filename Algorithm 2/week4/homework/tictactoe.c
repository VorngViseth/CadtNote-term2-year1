#include <stdio.h>
#include <stdbool.h>

#define WIN_COUNT 4 // Game row and columns
#define GRID_SIZE 5
#define PLAYER1 'X'
#define PLAYER2 'O'

    // Global variable
char board[GRID_SIZE][GRID_SIZE] = {
    {'.', '.', '.', '.', '.'}, // Row 1
    {'.', '.', '.', '.', '.'}, // Row 2
    {'.', '.', '.', '.', '.'}, // Row 3
    {'.', '.', '.', '.', '.'}, // Row 4
    {'.', '.', '.', '.', '.'}  // Row 5
};
    // Function prototype
bool checkRow(char board[GRID_SIZE][GRID_SIZE], char name){

    for (int row = 0; row < GRID_SIZE; row++){
        int found = 0;
        
        for (int column = 0; column < GRID_SIZE; column++){
            if (board[row][column] == name ) {
                found++;

                if(found == WIN_COUNT) return true;

            }else found = 0;
        }
    }
    return false;
}

bool checkColumn(char board[GRID_SIZE][GRID_SIZE], char name){

    for (int column = 0; column < GRID_SIZE; column++){
        int found = 0;

        for (int row = 0; row < GRID_SIZE - 1; row++){
            if (board[row][column] == name && board[row + 1][column]) {
                found++;

                if(found == WIN_COUNT) return true;

            }else found = 0;
        }
    }
    return false;
}


bool checkDiagonal(char board[GRID_SIZE][GRID_SIZE], char name){
    // Top-left to bottom-right
    for (int i = 0; i <= GRID_SIZE - WIN_COUNT; i++) {
        for (int j = 0; j <= GRID_SIZE - WIN_COUNT; j++) {
            int count = 0;

            for (int k = 0; k < WIN_COUNT; k++) {

                if (board[i + k][j + k] == name) count++;
                else break;
            }
            if (count == WIN_COUNT) return true;
        }
    }

    // Top-right to bottom-left
    for (int i = 0; i <= GRID_SIZE - WIN_COUNT; i++) {
        for (int j = WIN_COUNT - 1; j < GRID_SIZE; j++) {
            int count = 0;

            for (int k = 0; k < WIN_COUNT; k++) {
                if (board[i + k][j - k] == name) count++;

                else break;
            }

            if (count == WIN_COUNT) return true;
        }
    }

    return false;
}


bool onGoing(char board[GRID_SIZE][GRID_SIZE]){

    for (int row = 0; row < GRID_SIZE ; row++){
        for (int column = 0; column < GRID_SIZE ; column++){

            if (board[row][column] == '.') return true;

        }
    }

    return false;
}

void gameInput(char board[GRID_SIZE][GRID_SIZE], int player){

    int row, column;
    bool valid = true;


    for (; valid;){
        bool validRow = true, validColumn = true;
        for (; validRow;){
            printf("Enter row(0-4) : ");
            scanf(" %d", &row);
            
            if (row < GRID_SIZE) validRow = false;

            else printf("Invalid input\n");
        }


        for (; validColumn;){
            printf("Enter column(0-4) : ");
            scanf(" %d", &column);
            if (column < GRID_SIZE) validColumn = false;
            else printf("Invalid input\n");
        }


        if (board[row][column] != '.') printf("Input again! This spot is already have an input\n");
        else valid = false;
    }
        if (player == 1) board[row][column] = PLAYER1;
        else board[row][column] = PLAYER2;


    printf("Current board :\n");
    for (int i = 0; i < GRID_SIZE; i++){
        for (int j = 0; j < GRID_SIZE; j++){
            printf("%c  ", board[i][j]);
        }
        printf("\n");
    }
}

bool gameLogic(char board[GRID_SIZE][GRID_SIZE]){


    bool rowX = checkRow(board, 'X'), rowO = checkRow(board, 'O');
    bool columnX = checkColumn(board, 'X'), columnO = checkColumn(board, 'O');
    bool diagonalX = checkDiagonal(board, 'X'), diagonalO = checkDiagonal(board, 'O'); 
    bool onGoingX = onGoing(board);


    if (rowX || columnX || diagonalX){
        printf("Player 1 wins!!!");
        onGoingX = false;

    }else if (rowO || columnO || diagonalO){
        printf("Player 2 wins!!!");
        onGoingX = false; 

    }else if (!onGoingX){
        printf("Draw");

    }else{
        printf("Ongoing\n");
        onGoingX = true;
    }

    return onGoingX;
}


int main(){

    bool notGameOver = true;

    for (; notGameOver;){
        printf("Player 1's turn \n");
        gameInput(board, 1);
        notGameOver = gameLogic(board);


        if (notGameOver){
            printf("Player 2's turn : \n");
            gameInput(board, 2);
            notGameOver = gameLogic(board);
        }
    }
    return 0;
}

