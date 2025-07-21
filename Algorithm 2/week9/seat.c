#include <stdio.h>
#include <stdlib.h>

int main() {

    int rows = 3;
    int collumn = 2;

    int **ptrSeat = malloc(rows * sizeof(int*));
    if(ptrSeat == NULL) {
        printf("Memory allocation failed !\n");
        return 1;
    }

    for(int i = 0; i < rows; i++){
        ptrSeat[i] = malloc(collumn * sizeof(int));
        if(ptrSeat[i] == NULL){
            printf("Memory allocaton failed !\n");
            return 1;
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < collumn; j++) {
            printf("Enter student's ID at row %d, and column %d : ", i, j);
            scanf(" %d", &ptrSeat[i][j]);
        }
    }

    printf("Seating chart : \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < collumn; j++) {
            printf("%d  ", ptrSeat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++){
        free(ptrSeat[i]);
    }
    free(ptrSeat);
    return 0;
}