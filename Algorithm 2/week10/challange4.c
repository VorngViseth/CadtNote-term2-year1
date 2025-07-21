#include <stdio.h>


int main() {
    int nums[5];

    // TODO: Read 5 integers into nums and print them
    for(int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    printf("the number is : \n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}
