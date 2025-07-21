#include <stdio.h>
#include <string.h>

int main(){
    char names[3][10] = {"Alice", "Bob", "Eve"};
    strcpy(names[1], "Charlie");
  
    for(int i = 0 ; i < 3; i++){
        printf("%s\n", names[i]);
    }

    return 0 ;
}