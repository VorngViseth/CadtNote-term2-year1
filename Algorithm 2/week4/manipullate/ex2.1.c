#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define N 5
#define MAGIC_SUM 65

bool checkUniqeNumber(int grid[N][N], int size){
    bool same = true;
    bool* num = calloc(size+1, sizeof(bool));
    
    for (int row = 0; row < N ; row++){
        for (int column = 0; column < N ; column++){
            
            if (num[grid[row][column]] < 0 || num[grid[row][column] > size + 1]){
                same = false;
                break;
            }

            if( num[grid[row][column]] == false ) num[grid[row][column]] = true;
            else same = false; 
        }
        
        if(same == false) break;
    }
    
    free(num);
    return same;
}

bool sumRows(int grid[N][N]){
    bool sumRow = true;
    for (int row = 0; row < N && sumRow; row++){
        int sum = 0;
        for (int column = 0 ; column < N  && sumRow; column++){
            sum += grid[row][column];
        }
        if (sum != MAGIC_SUM ) sumRow = false; 
    }
    return sumRow;
}

bool sumColumn(int grid[N][N]){
    bool sumColumn = true;
    for (int column = 0; column < N && sumColumn; column++){
        int sum = 0;
        for (int row = 0 ; row < N  && sumColumn; row++){
            sum += grid[row][column];
        }
        if (sum != MAGIC_SUM ) sumColumn = false; 
    }
    return sumColumn;
}

bool sumDiagonal(int grid[N][N]){
    bool sumDiagonal = true;
    int sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (int i = 0; i < N; i++){
        sumDiagonal1 += grid[i][i];
        sumDiagonal2 += grid[i][4 - i];
    }
    
    if (sumDiagonal1 != MAGIC_SUM || sumDiagonal2 != MAGIC_SUM ) sumDiagonal = false; 
    return sumDiagonal;
}

bool isMagicSquare( int grid[N][N], int size) {
    // YOUR JOB IS HERE !
    bool magicSum = false;
    if (checkUniqeNumber(grid, size) && sumRows(grid) && sumColumn(grid) && sumDiagonal(grid)) magicSum = true;
    return magicSum;
}


int main() {
    int square[N][N] = {
        {17, 24, 1, 8, 15},
        {23, 5, 7, 14, 16},
        {4, 6, 13, 20, 22},
        {10, 12, 19, 21, 3},
        {11, 18, 25, 2, 9}
    };
    int size = N * N;

    if (isMagicSquare( square, size)) {
        printf("Valid magic square!\n");
    } else {
        printf("Not a valid magic square.\n");
    }
    return 0;
}
