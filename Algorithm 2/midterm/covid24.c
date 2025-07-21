#include <stdio.h>
#define ROWS 5
#define COLS 4

void theEndofTheDay(char grid[ROWS][COLS]){

    for(int i = 0; i < ROWS; i++){
        for(int j =0; j < COLS; j++){
            if(grid[i][j] == 'J') grid[i][j] = 'C';
        }
    }

}

void checkHealth(int row, int col, char grid[ROWS][COLS]){

    if(col+1 < COLS && grid[row][col+1] == 'H') grid[row][col+1] = 'J';
    if(col-1 >= 0 && grid[row][col-1] == 'H') grid[row][col-1] = 'J';
    if(row+1 < ROWS && grid[row+1][col] == 'H') grid[row+1][col] = 'J';
    if(row-1 >= 0 && grid[row-1][col] == 'H') grid[row-1][col] = 'J';

}

void covidSpread(char grid[ROWS][COLS]) {

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            
            if(grid[i][j] == 'C') checkHealth(i, j, grid);

        }
    }

}

void covid(int days, char grid[ROWS][COLS]){

    for(int i = 0; i < days; i++){
        covidSpread(grid);
        theEndofTheDay(grid);
    }

}

int main() {

    char grid[ROWS][COLS] = 
    {'C', 'H', 'H', 'H',
    'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H',
    'H', 'H', 'H', 'H',
    };
    int days = 0;

    scanf("%d", &days);

    covid(days, grid);

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%c  ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}