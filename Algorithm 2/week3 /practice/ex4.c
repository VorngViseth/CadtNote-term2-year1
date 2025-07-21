#include <stdio.h>
void print(char name, int number){
    printf("Welcome %c ! You have %d messages.\n", name,number);
}

int main() {
    print('A', 2);
    print('J', 5);
    print('B', 0);
return 0;
}
