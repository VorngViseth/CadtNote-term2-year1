#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
  int age;
  char name[50];
} Person;


typedef struct {
  Person *persons;
  int capacity;
  int size;
} PersonList;


// Global variable
// We use the global variable theList here to make it accessible from all functions without needing to pass a pointer each time.
PersonList theList;


void initList() {
  theList.capacity = 2;
  theList.size = 0;
  theList.persons = malloc(theList.capacity * sizeof(Person));
}

void expandCompacity(){
    theList.capacity += 2;
    theList.persons = realloc(theList.persons, theList.capacity*sizeof(Person));
}
// ✅ Task: Implement this function
void add(Person p) {
    if(theList.size == theList.capacity) expandCompacity();

    theList.persons[theList.size] = p;    
    theList.size++ ;
}


// ✅ Task: Implement this function
void printList() {
    printf("the list capacity reallocated to %d\n", theList.capacity);
    printf("the list size is %d\n", theList.size);

    for(int i = 0; i < theList.size; i++){
        printf("Person %s - Age = %d\n", theList.persons[i].name, theList.persons[i].age);
    }
}


void freeList() {
  free(theList.persons);
}


int main() {
  initList();


  Person p1 = {20, "p1"};
  add(p1);


  Person p2 = {20, "p2"};
  add(p2);


  Person p3 = {20, "p3"};
  add(p3);


  printList();
  freeList();
  return 0;
}
