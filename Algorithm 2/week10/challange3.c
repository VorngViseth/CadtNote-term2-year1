#include <stdio.h>
#include <string.h>

int main() {
    char word[100];


    // TODO: Read a word  (ex banana)
    scanf("%s", word);

    // TODO: Change the word to add The best at the beginning
    //  (ex The best banana)
    char addWord[64] = "The best ";
    strcat(addWord, word);

    // TODO: Print the result	
    printf("the string is %s\n", addWord);
    return 0;
}
