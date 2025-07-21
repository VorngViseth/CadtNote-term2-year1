#include <stdio.h>
int main(){
   int found = 1;
   int arr[10];
   printf("Enter 10 integers :\n");
   for(int i = 0; i< 10; i++){
        scanf("%d", &arr[i]);
   }
   for(int i = 1; i < 9; i++){
       if (arr[i] != arr[i-1] + arr[i-2]){
            printf("Not Valid\nbecause %d + %d is not equal to %d\n", arr[i-2], arr[i-1], arr[i]);
            found = 0;
            break;
       }
   }
   if (found){
        printf("Valid\n");
   }
    return 0;
}