#include <stdio.h>

void copy_to_matrix(int flat[12], int matrix[4][3]) {
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            /* MISSING LINE */
            flat[index] = matrix[i][j];
            index++;
        }
    }
}

int main () {

    int flat[12];
    int num[4][3] = {   
    
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12} 
                    
    };

    return 0;
}