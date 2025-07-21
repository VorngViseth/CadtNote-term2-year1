#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[50];
} Person;

void updateBestPerson(Person* person) {
    // TODO: Modify the given person
    // to have its name ending with The Best
    strcat(person->name, " the best");
}


int main() {
  Person person;
  printf("Enter age and name:\n");
  scanf("%d %s", &person.age, person.name);


  // Modify the person as a best person
  updateBestPerson(&person);


  printf("person name: %s\n", person.name);


  return 0;
}
