#include <stdio.h>
#include <string.h>

int power(int i){

    int pow = 1;
    
    for (int j = i ; j > 0; j--){
        pow *= 10;
    }

    return pow;
}

int stringToInt(char* string){
    
    int size = strlen(string) - 1;
    int num = 0;

    for(int i = 0 ; i <= size ; i++){
        int temp = string[i] - '0';
        num += temp * power(size - i);     
    }

    return num;

}

int sumNum(char* string1 , char* string2){
    return stringToInt(string1) + stringToInt(string2);
}

int main(){

    char string1[10] = "100";

    char string2[10] = "22";

    printf("%d\n", sumNum(string1, string2));

    return 0;
}