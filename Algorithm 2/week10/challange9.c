#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[50];
} Person;


int main() {
    int n;
    Person *people;


    // TODO:
    // 1. Read n
    scanf("%d", &n);
    // 2. Allocate memory for n persons
    people = malloc(n*sizeof(people));
    // 3. Scan and print each
    for(int i = 0; i < n; i++){
        scanf("%d %s", &people[i].age, people[i].name);
    }
    for(int i = 0; i < n; i++){
        printf("%d %s\n", people[i].age, people[i].name);
    }
    // 4. Free memory
    free(people);
    return 0;
}
