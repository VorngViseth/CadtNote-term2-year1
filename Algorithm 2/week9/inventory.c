#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// item struct
typedef struct {
    char name[50];
    int id;
    int quantity;
    int value;
} Item;

// Inventory struct
typedef struct {
    Item* item;
    int size;
    int capacity;
} Inventory ;

// extea function for help 

void searchMenu() {

    // let you choose to search between name or id
    printf("----- Search -----\n");
    printf("1. Search by name\n");      // if search by name, id == NULL
    printf("2. Search by ID\n");        // if search by id, name == NULL
    printf("------------------\n");
}

void feat() {

    // all the features for this exercise
    printf("----- FEATURE -----\n");
    printf("1. Add item\n");
    printf("2. View inventory\n");
    printf("3. Search item\n");
    printf("4. exit\n");
    printf("-------------------\n");
}

void printItem(Item item) { 

    // print item info
    printf("Item name : %s, Item ID : %d,  Value : %d, Quantity : %d\n", 
        item.name,
        item.id,
        item.value,
        item.quantity
    );
}

void expandCapacity(Inventory* theInventory, int expanAmount) {

    //expnan the inventory capacity if we are at the limit
    int newCapacity = theInventory->capacity + expanAmount;
    Item* ptrInventory = realloc(theInventory->item, newCapacity * sizeof(Item));
    if(ptrInventory == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    theInventory->item = ptrInventory;
    theInventory->capacity = newCapacity;

    printf("Inventeory capacity full, expan to %d\n", newCapacity);
}

// all the features function

void viewInventory(Inventory* theInventory) {
    // view inventory
    printf("The amount of item in the inventory : %d\n", theInventory->size);
    for(int i = 0; i < theInventory->size; i++) {
        printItem(theInventory->item[i]);
    }
}

void searchItem(Inventory* theInventory, const char* nameSearch, int idSearch){
    // search item by id or name
    for(int i = 0; i < theInventory->size; i++) {
        if(strcmp(nameSearch, theInventory->item[i].name) == 0 || idSearch == theInventory->item[i].id) {
            printItem(theInventory->item[i]);
        }
    }
}

void addItem(Inventory* theInventory){

    // add item to the inventory
    if(theInventory->size ==  theInventory->capacity) expandCapacity(theInventory, 2);

    Item addItem;

    // enter the item name that you are adding
    printf("Enter item's name : ");
    fgets(addItem.name, sizeof(addItem.name), stdin);
    addItem.name[strcspn(addItem.name, "\n")] = '\0';

    // initailize the item id to size + 1
    addItem.id = theInventory->size + 1;

    //enter the item's value
    printf("Enter the item's value : ");
    scanf(" %d", &addItem.value);
    getchar();

    // enter the item's quantity 
    printf("Enter the item quantity : ");
    scanf(" %d", &addItem.quantity);
    getchar();

    theInventory->item[theInventory->size] = addItem;
    theInventory->size++ ;
    printf("Add item successfully!\n");
}   

void searchFeat(Inventory* theInventory) {

    // search item
    int choice = 0;
    searchMenu();
    printf("Enter your choice : ");
    scanf(" %d", &choice);
    getchar();

    switch (choice) {

        case 1 :    // search by name
            char searchName[50];
            printf("Enter your item's name : ");
            fgets(searchName, sizeof(searchName), stdin);
            searchName[strcspn(searchName, "\n")] = '\0';

            for(int i = 0; i < theInventory->size; i++) {
                if(strcmp(searchName, theInventory->item[i].name) == 0) {
                    printItem(theInventory->item[i]);
                    return;
                }
            }

            printf("There's no item name : %s\n", searchName);
        break;
        case 2 :    // search by ID
            int idSearch;
            printf("Enter you item's ID : ");
            scanf(" %d", &idSearch);
            getchar();
            
            for(int i = 0; i < theInventory->size; i++) {
                if(idSearch == theInventory->item[i].id) {
                    printItem(theInventory->item[i]);
                    return; 
                }
            }

            printf("There's no item with ID : %d\n", idSearch); 
        break;
    }

}

int main(){

    Inventory inventory;
    inventory.size = 0;
    inventory.capacity = 10;
    inventory.item = malloc(inventory.capacity * sizeof(Item));
    if(inventory.item == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int choice = 0;
    while(choice != 4){

        feat();
        printf("Enter your choice : ");
        scanf(" %d", &choice);
        getchar();

        switch (choice) {
            case 1 :    // add item
                addItem(&inventory);
            break;
            case 2 :    // Vieww inventory
                viewInventory(&inventory);
            break;
            case 3 :    // Search Item  
                searchFeat(&inventory);
            break;
        }
    }    

    free(inventory.item);
    inventory.item = NULL;
    inventory.size = 0;
    inventory.capacity = 0;
    return 0;
}