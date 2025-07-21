#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitail(const char* string) {

    printf("%c.", toupper(string[0]));

    for(int i = 1; string[i] != '\0'; i++){
        if(string[i] == ' ' && string[i + 1] !=  '\0' && string[i + 1] != ' ') printf("%c.", toupper(string[i+1]));
    }

    printf("\n");

}

int main(){

    char string[50];
    printf("Enter your name : ");
    fgets(string, sizeof(string), stdin);
    printInitail(string);
    return 0;

}