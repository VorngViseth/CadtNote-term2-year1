#include <stdio.h>
#include <ctype.h>

void replace_uppercase_in_row(char arr[6][6], int target_row){
    for(int i = 0; i < 6; i++){
       if(isupper(arr[target_row][i])) {
           arr[target_row][i] = '*';
       }
    }
}

int main() {
    
    // Read grid character by character
    char grid[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }

    // Read row index
    int r;
    scanf("%d", &r);

    // Apply transformation
    replace_uppercase_in_row(grid, r);

    // Print updated grid
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
