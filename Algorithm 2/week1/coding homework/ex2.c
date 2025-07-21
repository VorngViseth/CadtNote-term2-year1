#include <stdio.h>
int main(){
    int arr[10], num;
    printf("Enter your array :\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 9; j++ ){
            if(arr[j] == 0){
                num = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = num;
            }
        }
    }
    printf("\nsorted array : ");
    for (int i = 0; i < 10; i++){
        printf("%d,", arr[i]);
    }
    return 0;
}