#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int input = 0;
    
    printf("Enter the number of memory : ");
    scanf(" %d", &input);
    getchar();

    int sum = 0;
    int *ptr = malloc(input * sizeof(int));
    printf("Enter the %d integers : ", input);
    for(int i = 0; i < input; i++) {
        scanf(" %d", &ptr[i]);
        getchar();
        sum += ptr[i];
    }

    printf("sum : %d\n", sum);
    return 0;
}