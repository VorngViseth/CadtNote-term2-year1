#include <stdio.h>
int main(){
    char arr[6] = {'A' , 'J', 'H', 'B', 'J', 'C'};
    int aRR[3];
    for (int i = 0; i < 6;  i++){
        if (arr[i] == 'A'){
            aRR[1] = i;
        }else if (arr[i] == 'B'){
            aRR[2] = i;
        }else if (arr[i] == 'C'){
            aRR[3] = i;
        }   
    }
    if ( aRR[1] < aRR[2] && aRR[2] < aRR[3]){
        printf("valid!!!\n");
    }else {
        printf("Invalid!!!\n");
    }
    return 0;
}