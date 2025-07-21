#include <stdio.h>
int main(){
   int found = 1;
   char arr[10];
   printf("Enter 10 integers : ");
   scanf("%10s", arr);
   for(int i = 0; i < 5; i++){
       if (arr[i] != arr[9 - i]){
            printf("This array is not palindromic\n");
            found = 0;
            break;
       }
   }
   if (found){
        printf("This array is palindromic\n");
   }
    return 0;
}