#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// write a program that asks for 5 user inputs.
// store inputs into Array A & Array B.
// for odd indices of index, Array A & Array B will have the same value.
// for even indices of index, Array A will be the value of the input, 
// and Array B will be the sum of the input and the previous indices of Array A.
// print the values for index, Array A, and Array B as they are calculated.

int main(int argc, char *argv[])
{
  int input;
  int index = 0;
  int var_a;
  int var_b;
  int array_a[SIZE];
  int array_b[SIZE];
  
  printf("Please enter 5 integer numbers: \n");
  
  for(index = 0; index < SIZE; index++) {
            
    scanf("%d", &input);
            
    if (index%2 == 0) {
      var_a = input;
      var_b = input;
      array_a[index] = var_a;
      array_b[index] = var_b;
      printf("Index:  %d\n", index);
      printf("Array A:  %d\n", array_a[index]);
      printf("Array B:  %d\n\n", array_b[index]);
      }
      
        else if (index%2 != 0) {
          var_a = input;
          var_b = (input + array_a[index-1]);
          array_a[index] = var_a;
          array_b[index] = var_b;
          printf("Index:  %d\n", index);
          printf("Array A:  %d\n", array_a[index]);
          printf("Array B:  %d\n\n", array_b[index]);
          }
      }
  
  system("PAUSE");	
  return 0;
}
