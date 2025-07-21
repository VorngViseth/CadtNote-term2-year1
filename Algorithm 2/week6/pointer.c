#include <stdio.h>

#define size 3

void printValue(int num[size]){

  for(int i=0; i<size; i++){
    printf("%d\n", *(num + i));
  }
  
}

void setElement(int num[size]){

  *(&num[size - 1]) = 99;

}

void add5(int* value){

  *value += 5;  

}

int main() {

  int num[] = {25, 50, 75};
  
  printf("This is the address of each elements :\n");
  for(int i =0; i < size; i++){
    printf("%p\n", &num[i]);
  }

  
  /*  we print the value by using a pointer(*) 
      to point to the address(&) of the value   */
      
  printf("This is the value of each elements :\n");
  for(int i = 0 ; i < size; i++){
    printf("%d\n", *(&num[i])); 
  }
  

  /*  this is a method to print the value of each element
      by encrement 1 on the pointer of the addres   */ 
  
  int a = *num;
  printf("This is the value of each elements :\n");
  for(int i = 0; i<size ; i++){
    a = *(num + i);
    printf("%d\n", a);
  }
  

  // last element is 99
  
  printf("Before change :\n");
  printValue(num);

  setElement(num);
  
  printf("After change :\n");
  printValue(num);
  

  //this is the mothod of pass value to function by pointer 
  
  int b = 45;
  printf("before add : %d\n", b);
  add5(&b);
  printf("added 5 to the variable : %d\n", b);
  
  
  return 0;
}