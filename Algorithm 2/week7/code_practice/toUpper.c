#include <stdio.h>
#include <ctype.h>

void toUpper(char* string){

    for(int i = 0; string[i] != '\0'; i++){

        if(islower(string[i])){
            string[i] = toupper(string[i]);
        }

    }

}

int main(){
    char string[10];
    printf("Enter your word : ");
    scanf(" %s", string);

    toUpper(string);

    printf("Updated string : %s\n", string);

    return 0;
}