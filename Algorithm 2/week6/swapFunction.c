#include <stdio.h>

void swap(int* firstValue, int* secValue){
    int temp = *firstValue;
    *firstValue = *secValue;
    *secValue = temp;
}

void print(int x, int y){
    printf("%d\t(%p)\n%d\t(%p)\n", x, &x, y, &y);
}

int main (){

    int x = 10, y = 20;

    printf("Before swap :\n");
    print(x, y);
    swap(&x, &y);
    printf("After swap :\n");
    print(x, y);

    return 0; 
}