#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    char name[50];
} Person;


int main() {
    Person p;


    // TODO: Scan p.age and p.name 
    scanf("%d %s", &p.age, p.name);

    // TODO: Change the person name to CADT
    strcpy(p.name, "CADT");

    // TODO: Print the result
    printf("%d %s", p.age, p.name);

    return 0;
}
