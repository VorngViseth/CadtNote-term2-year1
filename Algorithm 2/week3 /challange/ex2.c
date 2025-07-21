#include <stdio.h>
int main(){
    int true = 0;
    int arr[5] = {1, 2, 5, 4, 5};
    for(int i = 0 ; i < 5 && !true ; i++){
        for (int j = i + 1; j < 5; j++){
            if (arr[i] == arr[j]){
                true = 1;
                printf("Invalid!!!\n");
                break;
            }
        }
    }
    if(!true){
        printf("Valid!!!\n");
    }
    return 0;
}