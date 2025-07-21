#include <stdio.h>
int main(){
    int found = 0;
    char arr[10];
    printf("Enter 10 char : ");
    scanf("%10s", arr);
    for(int i = 0; i < 9; i++){
        if (arr[i] == 'a' && arr[i +1] == 'b'){
            found += 1; 
        }
    }
    printf("The amount of a is next to b is : %d\n", found);
    return 0;
}