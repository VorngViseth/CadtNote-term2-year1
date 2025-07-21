#include <stdio.h>
int countAboveThreshold(int listOfGrade[], int sizeOfTheArr, int threshold){
    int theGradeAbove;
    for(int i = 0; i < sizeOfTheArr; i++){
        if (listOfGrade[i] > threshold){
            theGradeAbove++;
        }
    }
    return theGradeAbove;
}
int main() {
    int gradeAbove, listOfGrade[] = {9, 8, 19, 13, 15};
    gradeAbove = countAboveThreshold(listOfGrade, 5, 12);  
    printf("%d\n", gradeAbove);  
    return 0;
}