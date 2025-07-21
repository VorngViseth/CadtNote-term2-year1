#include <string.h>

char newString(char* string) {
    char* newString;
    int len  = strlen(string);
    int over = 0;
    for(int i = 0; i < len; i++) {
        if(string[i] != '\t' || string[i] != '\n' || string[i] != ' ') {
            newString[over] = string[i];
            over++ ;
        }
    }
    newString[over] = '\0';
    return newString;
}

int main() {

    return 0; 
}