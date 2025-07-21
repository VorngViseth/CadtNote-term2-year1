#include <stdio.h>
void addBonus(int listOfGrade[], int sizeOfTheArr, int theBonus){
    for(int i = 0; i < sizeOfTheArr; i++){
        listOfGrade[i] += theBonus;
        if(listOfGrade[i] > 20){
            listOfGrade[i] = 20;
        }
        printf("%d ", listOfGrade[i]);
    }
}
int main(){
    int theListOfGrade[5] = { 9,  8,  19,  13,  15 };
    addBonus(theListOfGrade, 5, 2);  
    return 0;
}