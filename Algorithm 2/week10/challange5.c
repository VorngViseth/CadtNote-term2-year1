#include <stdio.h>
#include <string.h>


int main() {
    char line[101];

    // TODO: Use fgets to read a line and print it
    fgets(line, sizeof(line), stdin);

    printf("The line is : %s\n", line);

    return 0;
}
