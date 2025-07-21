#include <stdio.h>
int computeAvg(int listOfGrade[], int sizeOfTheArr){
    int avgGrade = 0;
    for (int i = 0; i < sizeOfTheArr; i++){
        avgGrade += listOfGrade[i];
    }
    return avgGrade/sizeOfTheArr;
}
int main(){
    int theListOfGrade[4] = { 10, 12, 10, 12 }, avgGrade;
    avgGrade = computeAvg(theListOfGrade, 4);
    printf("%d\n", avgGrade);
    return 0;
}   