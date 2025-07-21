#include <stdio.h>
void average(double assignment, double exam, int g){
    double result = (assignment + exam)/2;
    printf("float g%d = %.2lf\n", g,result);
}
int main (){

    average(20, 50, 1);
    average(18, 53, 2);
    average(19, 48, 3);

    return 0;
}