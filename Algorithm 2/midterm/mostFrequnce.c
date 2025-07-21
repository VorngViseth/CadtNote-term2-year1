#include <stdio.h>

int checkTheSmallest(int a, int b){
    return a < b ? a : b ;
}

int checkTheHighest(int num[10]){
    int max = num[0];
    int mostFrequence = 0;
    for(int i = 1; i < 10; i++){
        if(num[i] > max) {

            mostFrequence = i;
            max = num[i];

        }else if(num[i] == max){

            mostFrequence = checkTheSmallest(i, mostFrequence);

        }
    }

    return mostFrequence;
}

int mostFrequentNum(int size, int arr[size]){
    // TO DO
    int num[10]={0};

    for(int i = 0; i < size; i++){
        num[arr[i]]++ ;
    }

    return checkTheHighest(num);
}

int main() {
    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The answer is : %d\n", mostFrequentNum(size, arr));
    return 0 ;

}#include <stdio.h>

int checkTheSmallest(int a, int b){
    return a < b ? a : b ;
}

int checkTheHighest(int num[10]){
    int max = num[0];
    int mostFrequence = 0;
    for(int i = 1; i < 10; i++){
        if(num[i] > max) {

            mostFrequence = i;
            max = num[i];

        }else if(num[i] == max){

            mostFrequence = checkTheSmallest(i, mostFrequence);

        }
    }
    
    return mostFrequence;
}

int mostFrequentNum(int size, int arr[size]){
    // TO DO
    int num[10]={0};

    for(int i = 0; i < size; i++){
        num[arr[i]]++ ;
    }

    return checkTheHighest(num);
}

int main() {
    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The answer is : %d\n", mostFrequentNum(size, arr));
    return 0 ;

}