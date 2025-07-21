#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{


        
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size = n*2 - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int num = i < j ? i : j;
            num = num < size-i-1 ? num : size-i-1;
            num = num < size-j-1 ? num : size-j-1;
            printf("%d ", n - num );
        }
        printf("\n");
    }
    return 0;
}
