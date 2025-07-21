#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    char phoneNum[10];
    char sex[10];
}studentList;

int main (){

    studentList person1;
    strcpy(person1.name, "viseth");
    strcpy(person1.phoneNum, "12345678");
    strcpy(person1.sex, "male");

    printf("%s, %s, %s\n", person1.name, person1.phoneNum, person1.sex);

    studentList person2 = {"bunnak", "098573", "male"};

    printf("%s, %s, %s\n", person2.name, person2.phoneNum, person2.sex);

    return 0;
}