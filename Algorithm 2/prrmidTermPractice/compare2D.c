#include <stdio.h>
#include <stdbool.h>

bool are_equal(int rows, int cols, int a[rows][cols], int b[rows][cols]){
    
    int sum1 = 0,sum2 = 0;
    for(int i = 0 ; i < rows; i++){
        for(int j = 0 ; j < cols; j++){
            sum1 += a[i][j];
            sum2 += b[i][j];
        }
    }
    
    if(sum1 == sum2) return true;

    return false;
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int a[rows][cols], b[rows][cols];
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &b[i][j]);

    if (are_equal(rows, cols, a, b))
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}