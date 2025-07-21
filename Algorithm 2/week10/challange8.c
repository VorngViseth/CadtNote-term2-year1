#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int *arr;


    // TODO:
    // 1. Read n
    scanf("%d", &n);
    // 2. Dynamically allocate memory for n integers
    arr = malloc(n*sizeof(arr));
    // 3. Scan values and print them
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    // 4. Free memory
    free(arr);
    return 0;
}
