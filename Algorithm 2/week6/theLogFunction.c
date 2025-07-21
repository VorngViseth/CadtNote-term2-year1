#include <stdio.h>

void logFunction (int* ptrArr, int size){
    for(int i = 0; i < size ; i++){
        printf("%d\t(%p)\n", *(ptrArr + i), (ptrArr + i));
    }
}

int main() {

    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size ; i++){
        scanf("%d", &arr[i]);
    }

    int* ptrArr = arr;
    logFunction(ptrArr, size);

    return 0 ;
}