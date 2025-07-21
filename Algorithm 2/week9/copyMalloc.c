#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char string[50];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    int stringSize = strlen(string) + 1;
    char *copiedString = malloc(stringSize * sizeof(char));
    
    if(copiedString == NULL) {
        printf("No memory left\n");
    }else {
        strcpy(copiedString, string);
        printf("%s\n", copiedString);    
    }


    free(copiedString);
    return 0;
}