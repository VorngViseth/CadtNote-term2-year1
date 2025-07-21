#include <stdio.h>

typedef struct{
    int hours;
    int min;
}Time;

typedef struct {
    char studentName[50];
    Time time;
} Attendance ;

int compareTime(Time time1, Time time2){

    if (time1.hours > time2.hours) return 1;
    else if (time1.hours == time2.hours && time1.min > time2.min) return 1;
    else return 0;

}

Attendance getLatest(Attendance attendance[5]){
    Attendance latest = attendance[0];
    for(int i = 1; i < 5; i++){
        if (compareTime( attendance[i].time, latest.time)) latest = attendance[i];
    }

    return latest;
}

int main(){

    Attendance attendance[5];

    for(int i = 0; i < 5; i++){
        printf("Enter student's %d name : ", i + 1);
        scanf(" %s",attendance[i].studentName);
        printf("Enter student's %d time (hour min): ", i + 1);
        scanf(" %d %d", &attendance[i].time.hours, &attendance[i].time.min);
    }

    Attendance latest = getLatest(attendance);

    printf("the latest student is :\n");
    printf("%s\n%dh %dmin\n", latest.studentName, latest.time.hours, latest.time.min);
 
    return 0;
}