#include <stdio.h>
#include <stdbool.h>

bool isPositiveEven(int n) {
    bool positiveEven = false;
    
    if (n > 0 && n % 2 == 0) positiveEven = true;

    return positiveEven;
}

int countEvensInRow(int row[5]){
    int found = 0;

    for(int i = 0; i < 5; i++){
        if(isPositiveEven(row[i])) found++;
    }

    return found ;
}

int  getRowWithMostEvens(int matrix[5][5]) {
    int rows[5] = {0};
    int max = 0;
    int row = 0;

    for(int i = 0; i < 5 ; i++){
        rows[i] = countEvensInRow(matrix[i]);
    }
    
    for (int i = 0 ; i < 5; i++){
        if (rows[i] > max) {
            max = rows[i]; 
            row = i;
        } 
    }


    return row;
}

int main (){
 


  int matrix[5][5] = {
      {1, 2, 3, 4, 5},
      {2, -4, 6, 8, 10},
      {1, 3, 5, 7, -9},
      {0, -2, 4, 6, 8},
      {11, 13, 15, 17, 19},
  };

  int result = getRowWithMostEvens(matrix);
  printf("%d\n", result);
 

  return 0;
}
