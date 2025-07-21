#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[50];
} Person;


Person getBestPerson(Person person) {
    // TODO: Create a new version of the given person
    // having its name ending with The Best
    Person newPerson = person;
    strcat(newPerson.name, " the best");

    return newPerson;
}


int main() {
  Person normalPerson;
  printf("Enter age and name:\n");
  scanf("%d %s", &normalPerson.age, normalPerson.name);


  // Clone the person as a best person
  Person bestPerson = getBestPerson(normalPerson);


  printf("Normal person name: %s\n", normalPerson.name);
  printf("Best person name: %s\n", bestPerson.name);
  return 0;
}
