#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    double score[5];
}Student;

double avgScores(Student name){
    int sum = 0 ;
    for(int i = 0; i < 5; i++){
        sum += name.score[i];
    }

    return sum/5 ;
}

int main (){

    Student viseth;
    strcpy(viseth.name,"Vorng Viseth");
    viseth.id = 12345678;
    for(int i = 0; i < 5; i++){
        viseth.score[i] = 10;
    }
    printf("name : %s\nid : %d\naverage scores : %lf\n", viseth.name, viseth.id, avgScores(viseth));

    printf(".....................\n");

    Student sousdey;
    strcpy(sousdey.name,"sousdey");
    sousdey.id = 9898989;
    for(int i = 0; i < 5; i++){
        sousdey.score[i] = 15;
    }
    printf("name : %s\nid : %d\naverage scores : %lf\n", sousdey.name, sousdey.id, avgScores(sousdey));


    return 0;
}