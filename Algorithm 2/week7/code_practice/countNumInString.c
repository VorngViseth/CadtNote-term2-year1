#include <stdio.h>
int main(){
    int arr[10] = {0};
    char s[1000];
    scanf("%s", s);
    for(int i = 0 ; i < 100 && s[i] != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9') arr[s[i] - '0']++ ;
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
} 