#include <stdio.h>

#define HORSE_MOVE 8
#define BOARD_SIZE 8

typedef struct {
    int x;
    int y;
} Posiiton;

int main(){

    Posiiton moves[HORSE_MOVE] = {
        {1,2}, {-1,2}, {1,-2}, {-1,-2}, {2,1}, {-2,1}, {2,-1}, {-2,-1}
    };

    Posiiton queue[BOARD_SIZE*BOARD_SIZE];

    int steps = 0;

    printf()
    return 0;
}