/*
* swap two integers
* without using intermediate temporary variables.
*/
#include <stdio.h>

int swapit(int *a, int *b){

   *(a) ^= *(b);
   *(b) ^= *(a);
   *(a) ^= *(b);
   
   return *(a);
}


int main() {
  int a = 8 , b= 9;
 
  printf("swapping %d and %d in ", a,b);

  int c = swapit(&a, &b);
  
  printf("%d and %d ", a,b);
  return 0;
}
