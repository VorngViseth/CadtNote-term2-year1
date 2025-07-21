#include <stdio.h>

typedef struct{
    int hours;
    int min;
    int sec;
}Time;

Time sum(Time time1, Time time2){
    
    int minSum = time1.min + time2.min;
    int hourSum = time1.hours + time2.hours;
    int secSum = time1.sec + time2.sec;

    if(secSum >= 60) {
        secSum -= 60;
        minSum++ ;
    }

    if(minSum >= 60) {
        minSum -= 60;
        hourSum++ ;
    }

    Time sum;
    sum.hours = hourSum;
    sum.min = minSum;
    sum.sec = secSum;
    
    return sum;
}

int compareTime(Time time1, Time time2){

    if (time1.hours == time2.hours && time1.min == time2.min && time1.sec == time2.sec) return 0;
    else if (time1.hours > time2.hours) return 1;
    else if (time1.hours == time2.hours && time1.min > time2.min) return 1;
    else if (time1.hours == time2.hours && time1.min == time2.min && time1.sec > time2.sec) return 0;
    else return -1;

}

int main(){

    Time time1;
    time1.hours = 1;
    time1.min = 45;
    time1.sec = 45;

    Time time2;
    time2.hours = 1;
    time2.min = 45;
    time2.sec = 45;

    Time sumTime = sum(time1,time2);

    printf("time 1 : %dh %dmin %dsec\n", time1.hours, time1.min, time1.sec);
    printf("time 2 : %dh %dmin %dsec\n", time2.hours, time2.min, time2.sec);
    printf("%dh %dmin %dsec\n", sumTime.hours, sumTime.min, sumTime.sec);
    printf("%d\n", compareTime(time1, time2));

    return 0;
}