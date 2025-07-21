#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

typedef struct {
    int x, y, dist;
} Node;

// All 8 possible knight moves
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

// Check if position is within the board
int is_valid(int x, int y) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE;
}

// Convert algebraic notation to coordinates
void to_coords(char* pos, int* x, int* y) {
    *x = pos[0] - 'a';
    *y = 8 - (pos[1] - '0');
}

// BFS to find minimum knight moves
int knight_moves(char* start, char* end) {
    int visited[SIZE][SIZE] = {0};

    int sx, sy, ex, ey;
    to_coords(start, &sx, &sy);
    to_coords(end, &ex, &ey);

    Node queue[SIZE * SIZE * 2];
    int front = 0, back = 0;

    queue[back++] = (Node){sx, sy, 0};
    visited[sx][sy] = 1;

    while (front < back) {
        Node current = queue[front++];

        if (current.x == ex && current.y == ey)
            return current.dist;

        for (int i = 0; i < 8; i++) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (is_valid(nx, ny) && !visited[nx][ny]) {
                visited[nx][ny] = 1;
                queue[back++] = (Node){nx, ny, current.dist + 1};
            }
        }
    }

    return -1; // Should never reach here
}

int main() {
    char start[3], end[3];

    printf("Enter start position (e.g., a8): ");
    scanf("%s", start);

    printf("Enter end position (e.g., d8): ");
    scanf("%s", end);

    int moves = knight_moves(start, end);
    printf("Minimum knight moves from %s to %s: %d\n", start, end, moves);

    return 0;
}
