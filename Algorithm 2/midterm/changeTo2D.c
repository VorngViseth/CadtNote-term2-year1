#include <stdio.h>
#define ROW 4
#define COL 4

void fillWithZero( int col, int row, int matrix[ROW][COL]){
    int j;
    int i;

    for(i = col; i < COL; i++){
        for(j = row; j < ROW; j++){
            matrix[j][i] = 0;
        }

        row = 0;
    }
} 

void chnageTo2D( int matrix[ROW][COL], int arr[]){
    int temp = 0;

    for(int i = 0; i< COL; i++){
        for(int j = 0; j < ROW; j++){
            
            if( arr[temp] >= 0 ) matrix[j][i] = arr[temp];
            else {
                fillWithZero(i, j, matrix);
                return;
            } 

            temp++ ;            
        }
    }

}

int main(){

    int size = ROW * COL;
    int arr[size];
    int matrix[ROW][COL];

    for(int i = 0 ; i < size; i++){
        scanf("%d", &arr[i]);
    }

    chnageTo2D(matrix, arr);

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}