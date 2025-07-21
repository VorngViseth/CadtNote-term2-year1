#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 100
#define MAX_NUMBER 9

typedef struct {
    char **name;
    char **number;
}Student;

void printResult(char *nameSearch, char **name, char **number, int phoneBook){

    int found = 0;
    for(int i = 0; i < phoneBook; i++){
        
        if(strcmp(nameSearch, name[i]) == 0){
            printf("%s=%s\n", nameSearch, number[i]);
            return;
        }
    }   

    printf("Not found\n");

}   

int main() {

    int phoneBook = 0;
    scanf("%d", &phoneBook);

    Student n;
    
    n.name = malloc(phoneBook * sizeof(char *));
    n.number = malloc(phoneBook * sizeof(char *));

    for(int i = 0; i < phoneBook; i++){
        n.name[i] = malloc(MAX_NAME * sizeof(char));
        n.number[i] = malloc(MAX_NUMBER * sizeof(char));

        scanf("%s %s", n.name[i], n.number[i]);
    }

    char nameSearch[100];
    while(scanf("%s", nameSearch) != EOF) {
        printResult(nameSearch, n.name, n.number, phoneBook);
    }

    free(n.name);
    free(n.number);

    return 0;
}
