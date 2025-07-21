#include <stdio.h>

typedef struct {
    int x ;
    int y ;
} Direction;

int main (){

    Direction d1 ={4, 2};

    printf("%d\n", d1.x);
    printf("%d\n", d1.y);
    

    return 0;
}