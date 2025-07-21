#include <stdio.h>

    // to input elements 
void inPutScore(int *score){
    scanf("%d", score);
}

    // to calculate avg of assignment 
double calculateAvg(int score, int size){
    return (double)score/size;
} 

   // to calculate the final grade
double finalGrade(double assignmentAvg, double midtermScore, double finalGradeScore){
    return (double)assignmentAvg*40/100 + midtermScore*25/100 + finalGradeScore*35/100;
}

    //to print the result 
void printResult(double avgAssignment, double avgFinalGrade){
    printf("\n--- Results ---\n");
    printf("Assignment average : %.2lf\n", avgAssignment);
    printf("Final grade : %.2lf\n", avgFinalGrade);
}

    // the main code 
int main(){
    int scoreAssignment[3], size = 3;
    int scoreFinal;
    int scoreMidterm;
    double assignmentAvg, finalGradeAvg;

        // to input the assignment score
    for(int i = 0; i < size; i++){
        printf("Enter grade for assignment %d : ", i+1);
        inPutScore(&scoreAssignment[i]);
    }
        // to input the score of the midterm
    printf("Enter grade for midterm exam : ");
    inPutScore(&scoreMidterm);

        // to input the score of the final
    printf("Enter grade for final exam : ");
    inPutScore(&scoreFinal);

        //to calculate the assignment avg
    for(int i = 0; i < size; i++){
        assignmentAvg += calculateAvg(scoreAssignment[i], size);
    }
        // to get the value of the final grade 
    finalGradeAvg = finalGrade(assignmentAvg, scoreMidterm, scoreFinal );

        // print result
    printResult(assignmentAvg,finalGradeAvg);

    return 0;
}