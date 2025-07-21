#include <stdio.h>


typedef struct {
    int age;
    char name[50];
} Person;


int main() {
    int n;
    Person people[100];


    // TODO:
    // 1. Read n
    scanf("%d", &n);
    // 2. Read n people (name + age)
    for(int i = 0; i < n; i++){
        scanf("%d %s", &people[i].age, people[i].name);
    }
    // 3. Print all people
    for(int i = 0; i < n; i++){
        printf("%d %s\n", people[i].age, people[i].name);
    }
    return 0;
}
