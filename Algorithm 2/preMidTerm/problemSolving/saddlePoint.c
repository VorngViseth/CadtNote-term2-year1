#include <stdio.h>
#include <stdbool.h>

int getMinimumRow(int row, int matrix[4][4]) {
    int min = matrix[row][0];

    for(int i = 1; i < 4; i++){
        if( matrix[row][i] < min){
            min = matrix[row][i];

        }
    }

    return min;
}

int getMaximumOnColumn(int column, int matrix[4][4]) {
    int max = matrix[0][column];

    for(int i = 1; i < 4; i++){
        if( matrix[i][column] > max){
            max = matrix[i][column];

        }
    }

    return max;
}

void findSaddlePoint(int matrix[4][4]){
    int max = 0;
    int min = 0;
    bool saddle = false; 
    for(int row = 0; row < 4; row++){
        min = getMinimumRow(row, matrix);

        for(int column = 0 ; column < 4; column++){
            max = getMaximumOnColumn(column, matrix);
            
            if(min == max) {
                printf("%d at (%d, %d)", min, row, column);
                saddle = true;
            }

        }
    }
    
    if(!saddle) printf("No saddle point");
}

int main(){

    int number[4][4] = {

        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {10, 9, 11, 12},
        {13, 14, 15, 16}

    };

    findSaddlePoint(number);

    return 0;
}