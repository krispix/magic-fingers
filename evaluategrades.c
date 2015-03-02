#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int evaluate(void) {
    
    int grade[SIZE];
    int value;
    int index;
    float avg;
    int sum = 0;
    int value_a = 0;
    int value_b = 0;
    int value_c = 0;
    
    printf("Enter five, integer grades:\n\n");
    scanf("%d", &value);
              
              for (index = 0; index < (SIZE-1) && value >= 70 && value <= 100; index++) {
                  
                  if (value >= 70 && value <= 79) {
                            grade[index] = value;
                            sum = sum + value;
                            value_c++;  // count C grades
                            }
                            
                            else if (value >= 80 && value <= 89) {
                                 grade[index] = value;
                                 sum = sum + value;
                                 value_b++;  // count B grades
                                 }
                                 
                                 else if (value >= 90 && value <= 100) {
                                      grade[index] = value;
                                      sum = sum + value;
                                      value_a++;  // count A grades
                                      }
                                      
                                      else if (value < 70) {
                                           printf("Grade must be greater than 70.\n\n");
                                           evaluate();
                                           }
                                           
                                           else if (value > 100) {
                                                printf("Grade must be less than 100.\n\n");
                                                evaluate();
                                                }
                
        scanf("%d", &value);
        
        }
        
        if (value >= 70 && value <= 79) {
                  grade[index] = value;
                  sum = sum + value;
                  value_c++;  // count C grades
                  }
                  
                  else if (value >= 80 && value <= 89) {
                       grade[index] = value;
                       sum = sum + value;
                       value_b++;  // count B grades
                       }
                       
                       else if (value >= 90 && value <= 100) {
                            grade[index] = value;
                            sum = sum + value;
                            value_a++;  // count A grades
                            }
                            
                            else if (value < 70) {
                                 printf("Grade must be greater than 70.\n\n");
                                 evaluate();
                                 }
                                 
                                 else if (value > 100) {
                                      printf("Grade must be less than 100.\n\n");
                                      evaluate();
                                      }
        
        printf("%d", sum);
        avg = sum / SIZE;  // average grade
        
        printf("\nThe average grade is:  %.2f\n\n", avg);
        printf("The number of A's is %d\n\n", value_a);
        printf("The number of B's is %d\n\n", value_b);
        printf("The number of C's is %d\n\n", value_c);
        
        
  _Bool start;
  int num;
 
  printf("Press 1 to continue or q to quit.\n\n");
  start = (scanf("%d", &num) == 1);
  
  if (start ==1) {
  evaluate();
}
  else {
       printf("\n");
       }
}

int main(int argc, char *argv[]) {

  evaluate();

  system("PAUSE");
  return 0;
  
}

