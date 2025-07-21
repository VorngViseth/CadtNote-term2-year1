#include <stdio.h>
#include <stdlib.h>

int main() {

    int ratingAmount = 0;

    printf("How many ratings will you enter ?\n");
    scanf(" %d", &ratingAmount);
    getchar();

    int* rating = malloc(ratingAmount * sizeof(int));

    if(rating == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for(int i = 0; i < ratingAmount; i++){
        printf("Enter rating #%d : ", i+1);
        scanf(" %d", &rating[i]);
        getchar();
    }

    printf("Rating Entered : ");
    for(int i = 0; i < ratingAmount; i++){
        printf("%d ", rating[i]);
    }
    printf("\n");

    free(rating);
    return 0;
}