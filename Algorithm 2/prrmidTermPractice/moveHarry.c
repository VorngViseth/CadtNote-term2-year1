#include <stdio.h>

int simulate_harry(char road[10]) {
    int harry = 2; 
    int i;
    
    for(i = 0; i < 10; i++){
        if(road[i] == 'P') harry++;
        else if(road[i] == 'V') harry--;
        
        if(harry == 0) return i;
    }
    
    return i - 1;
}

int main() {
    char road[10];

    // Read the road character by character
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &road[i]);
    }

    int result = simulate_harry(road);
    printf("%d\n", result);

    return 0;
}