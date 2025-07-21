#include <stdio.h>
int main(){
    int arr[5], found = 0;
    printf("Enter your array :\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            found += 1;
        }
    }
    printf("The amount of even numbers are : %d\n", found);
    return 0;
}