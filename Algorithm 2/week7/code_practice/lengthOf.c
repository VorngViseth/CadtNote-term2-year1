#include  <stdio.h>
int lengthOf(const char* string){
    int i  = 0;
    while(string[i] != '\0'){
        i++ ;
    }
    return i;
}

int main(){
    char name[10];
    printf("Enter your name : ");
    scanf(" %s", name);

    int size = lengthOf(name);
    printf("Your name has %d characters \n", size);
    return 0 ;
}