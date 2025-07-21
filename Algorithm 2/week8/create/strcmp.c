#include <stdio.h>

int stringLen(const char* string) {

    int i = 0;
    for(i = 0; string[i] != '\0'; i++);

    return i;
}

int my_stringcmp(const char* string1, const char* string2) {
    
    if(stringLen(string1) < stringLen(string2)) return -1;
    else if(stringLen(string1) > stringLen(string2)) return 1;
    else {

        for(int i = 0; string1[i] != '\0'; i++) {
            if(string1[i] > string2[i]) return 1;
            else if(string1[i] < string2[i]) return -1;
        }

    }

    return 0;
}

int main() {

    char string1[30];
    char string2[30];

    printf("Enter string 1 : ");
    fgets(string1, sizeof(string1), stdin);
    printf("Enter string 2 : ");
    fgets(string2, sizeof(string2), stdin);

    printf("%d\n", my_stringcmp(string1, string2));

    return 0;
}