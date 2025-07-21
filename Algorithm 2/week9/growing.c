#include <stdlib.h>
#include <string.h>
#include <stdio.h>

 typedef struct {
  int* items;           // The list of items
  int size;			// How many items are currently in the list of items
  int capacity;		// What is the space allocated for the list of items
} List;

void expandCapacity(List* theList, int expandAmount){

    int newCompacity = theList->capacity + expandAmount;
    int* ptrtheList = realloc(theList->items, newCompacity * sizeof(int));
    if(ptrtheList == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    theList->items = ptrtheList;
    theList->capacity = newCompacity;

}

void addToList(List* theList, int item){
    
    if(theList->size == theList->capacity) {
        printf("List is full, resizing to %d\n", theList->capacity + 2);
        expandCapacity(theList, 2);
    }  

    printf("Adding item : %d\n", item);
    theList->items[theList->size] = item;
    theList->size++ ;

}

int main() {

  // Create a list and start with enough space for 2 items
  List myList;  
  myList.size = 0;
  myList.capacity = 2;
  myList.items = malloc(myList.capacity * sizeof(int));

  // Find out if memory allocation was successful
  if (myList.items == NULL) {
    printf("Memory allocation failed");
    return 1; // Exit the program with an error code
  }

  // Add 5 items to the list
  for (int i = 0; i < 5; i++) {
    addToList(&myList, i + 1);
  }

  // Display the contents of the list
  printf("Final list content:");
  for (int j = 0; j < myList.size; j++) {
    printf("%d ", myList.items[j]);
  }

  // Free the memory when it is no longer needed
  free(myList.items);
  myList.items = NULL;

  return 0;
}