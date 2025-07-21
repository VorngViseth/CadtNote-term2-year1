#include <stdio.h>
#include <string.h>

void reverseString(char* string){

    int length = strlen(string);
    for(int i = 0; i < length/2; i++){
        char temp = string[i];
        string[i] = string[length - 1 - i];
        string[length - 1 - i] = temp;
    }

}

int main(){
    char string[10];
    printf("Enter your word : ");
    scanf(" %s", string);

    reverseString(string);

    printf("Reversed string : %s\n", string);
    return 0;
}