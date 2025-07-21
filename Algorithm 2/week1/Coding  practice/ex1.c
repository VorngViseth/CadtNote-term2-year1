#include <stdio.h>
int main() {
    char arr[5] = {'a' , 'a', 'b', 'b', 'c' };
    char Arr[5] = {'a' , 'a', 'b', 'b', 'c' };
    int ARr[3] = {0}, ARR[3] = {0}, true = 1;
    for (int i= 0; i<5;i++){
        if(arr[i]== 'a'){
            ARr[0] += 1;
        }else if(arr[i] == 'b'){
            ARr[1] += 1;
        }else if(arr[i] == 'c'){
            ARr[2] += 1;
        }
    }
    for (int i= 0; i<5;i++){
        if(Arr[i]== 'a'){
            ARR[0] += 1;
        }else if(Arr[i] == 'b'){
            ARR[1] += 1;
        }else if(Arr[i] == 'c'){
            ARR[2] += 1;
        }
    }
    for(int i = 0; i<3; i++){
        if(ARr[i] != ARR[i]){
            printf("Different\nelements in arr 1 : A(%d) B(%d) C(%d)\nelements in arr 2 : A(%d) B(%d) C(%d)", ARr[0], ARr[1], ARr[2], ARR[0], ARR[1], ARR[2]);
            true = 0;
            break;
        }
    }
    if (true){
        printf("Same : A(%d) B(%d) C(%d)", ARr[0], ARr[1], ARr[2]);
    }
    return 0;
}