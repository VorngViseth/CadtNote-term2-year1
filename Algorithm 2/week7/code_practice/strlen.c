#include  <stdio.h>
#include <string.h>

int main(){
    
   char name[10];
   printf("Enter your name : ");
   scanf(" %s", name);

   int size = strlen(name);

   printf("Your name has %d characters \n", size);

   return 0 ;
}
