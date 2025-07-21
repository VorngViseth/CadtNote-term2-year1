#include <stdio.h>
#include <stdlib.h>

#define MAXNAME 9

 int main(){
    int player = 0;
    printf("Enter the number of player you want to have : ");
    scanf(" %d", &player);

    char **playerName = malloc(player * sizeof(char *));

    for(int i = 0 ; i < player; i++){
        playerName[i] = malloc(MAXNAME * sizeof(int));
        scanf("%s", playerName[i]);
        printf("%s\n", playerName[i]);
    }

    free(playerName);

    return 0;
 }