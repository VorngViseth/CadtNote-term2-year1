#include <stdio.h>
#include <ctype.h>

void countVowels(const char* string, int *count){

    for(int i = 0; string[i] != '\0'; i++){
        int s = tolower(string[i]);
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') *count += 1;
    } 
    
}

int main(){
    char string[100];
    int count = 0;

    fgets(string,   sizeof(string), stdin);

    countVowels(string, &count);

    printf("%d\n", count);

    return 0 ;
}