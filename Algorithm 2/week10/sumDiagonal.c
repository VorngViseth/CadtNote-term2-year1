#include <stdio.h>

int sumDiagonal(int num, int matrix[num][num]) {
    int sum = 0;
    int col = num - 1;

    for(int i = 0; i < num; i++) {
        for(int i = 0; i < num; i++) {
            sum += matrix[i][i];
            sum += matrix[i][col]; 
            col-- ; 
        }
    }

    if(num % 2 != 0) sum -= matrix[num/2][num/2];

    return sum;
}

int main() {
    
    return 0;
}