#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int min;
    int max;
} Range;

int overlap(Range range[], int size) {
    int overLap = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((range[i].min <= range[j].min && range[i].max <= range[j].min) && i != j) {
                overLap++;
            }
        }
    }
    return overLap;
}

int main() {
    const int size = 5;

    Range *range = malloc(size * sizeof(Range));
    range[0] = (Range){1, 2}; 
    range[1] = (Range){3, 7};
    range[2] = (Range){2, 6};
    range[3] = (Range){8, 9};
    range[4] = (Range){2, 10};

    int overlapCount = overlap(range, size);
    printf("%d\n", overlapCount);
}