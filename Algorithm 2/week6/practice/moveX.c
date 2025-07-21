#include <stdio.h>
#include <stdbool.h>

void turnTo2D(int size, char arr[size], int col){
    int temp = 0;

    for (int i = 0; i < size; i++){    
        printf("%c  ", arr[i]);
        temp++;

        if (temp == col){
            printf("\n");
            temp = 0;
        }

    }
}

void findX(int size, char arr[size], int *xPosition){

    for (int i = 0; i < size; i++){
        if (arr[i] == 'X'){
            *xPosition = i;
            return;            
        }

    }
}

void moveUntilNoWall(int size, char arr[size], int *xPosition){
    for (int i = *xPosition + 1; i < size; i++){

        if (arr[i] != 'W'){
            arr[i] = 'X';
            arr[*xPosition] = '.';
            *xPosition = i;
            return;
        }

    }
}

void moveRight(int size, char arr[size], int *xPosition){
    
    int temp = *xPosition;

    if (temp + 1 < size && arr[temp + 1] != 'W'){
        arr[temp + 1] = 'X';
        arr[temp] = '.';
        *xPosition = temp + 1;
    }else{
        moveUntilNoWall(size, arr, xPosition);
    }

}

void moveX(int size, char arr[size], int step){

    int xPosition = 0;
    findX(size, arr, &xPosition);

    for (int i = 0; i < step; i++){
        moveRight(size, arr, &xPosition);
    }

}

int main(){

    int step = 0;
    scanf("%d", &step);
    
    int row = 4;
    int col = 4;
    int size = row * col;
    char arr[size];
    for (int i = 0; i < size; i++){
        scanf(" %c", &arr[i]);
    }

    moveX(size, arr, step);
    turnTo2D(size, arr, col);

    return 0;
}