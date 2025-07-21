#include <stdio.h>

int sum_until_first_7(int rows, int cols, int arr[rows][cols]) {
    int sum = 0;
    for(int i = 0; i <= rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == 7  ) return sum;

            sum += arr[i][j];            
        }
        
    }
    
    return sum; 
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j =0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("%d\n", sum_until_first_7(n , m, arr));
    return 0;
}