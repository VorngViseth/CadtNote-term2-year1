#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
} Student;


typedef struct  {
    char name[50];
    Student *students;
    int count;
} Classroom;


int main() {
    Classroom c;


    // TODO:
    // 1. Read classroom name
    fgets(c.name, sizeof(c.name), stdin);
    // 2. Read number of students
    scanf("%d", &c.count);
    // 3. Allocate and scan students
    c.students = malloc(c.count * sizeof(c.students));

    for(int i = 0; i < c.count; i++){
        scanf("%d %s", &c.students[i].id, c.students[i].name);
    }
    // 4. Print everything
    printf("%s", c.name);
    printf("number of student : %d\n", c.count);
    for(int i = 0; i < c.count; i++){
        printf("%d %s\n", c.students[i].id, c.students[i].name);
    }
    // 5. Free memory
    free(c.students);
    return 0;
}
