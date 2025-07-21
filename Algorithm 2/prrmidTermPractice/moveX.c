#include <stdio.h>
#include <stdbool.h>

void findX(int *row, int *column, char grid[6][6]){

    for(int i = 0; i < 6; i++){
        for (int j =0 ; j < 6; j++){

            if(grid[i][j] == 'X') {
                *row = i;
                *column = j;
                return;
            }

        }
    }
}


void move_X(char grid[6][6]) {
    int row = 0, column = 0;

    findX(&row, &column, grid);

    if(grid[row][column + 1] == '.'){
        grid[row][column] = '.';
        grid[row][column + 1] = 'X';
        
    } else if(row < 5 && column == 5) {
        grid[row][column] = '.';
        grid[row + 1][0] = 'X';
    }
}

int main() {
    char grid[6][6];

    // Read grid character by character
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf(" %c", &grid[i][j]);  // space before %c to skip whitespace/newlines
        }
    }

    // Move the X
    move_X(grid);

    // Print the updated grid character by character
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}