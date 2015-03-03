#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int evaluate(void) {
    
    int grade[SIZE];  // array with a size defined by SIZE
    int value; // value that the user enters
    int index; // index that for loop will cycle through
    float avg; // average of all the grades
    int sum = 0; // sum of all grades
    int value_a = 0;  // count of A grades
    int value_b = 0;  // count of B grades
    int value_c = 0;  // count of C grades
    
    printf("Enter five, integer grades:\n\n");  // prompts user for input
    scanf("%d", &value);  // user input
              
              for (index = 0; index < (SIZE-1) && value >= 70 && value <= 100; index++) {  // for loop to cycle through while all conditions met, increment by 1
                  
                  if (value >= 70 && value <= 79) {  // if a value is between 70 and 79...
                            grade[index] = value;  // ...assign it to grade[index]...
                            sum = sum + value;  // ...add it to the current value of sum...
                            value_c++;  // ...and add 1 to the count of C grades
                            }
                            
                            else if (value >= 80 && value <= 89) {  // if a vlue is between 80 and 89...
                                 grade[index] = value;  // ...assign it to grade[index]...
                                 sum = sum + value;  // ...add it to the current value of sum...
                                 value_b++;  // ...and add 1 to the count of B grades
                                 }
                                 
                                 else if (value >= 90 && value <= 100) {  // if a value is between 90 and 100...
                                      grade[index] = value;  // ...assign it to grade[index]...
                                      sum = sum + value;  // ...add it to the current value of sum...
                                      value_a++;  // ...and add 1 to the count of A grades
                                      }
                                      
                                      else if (value < 70) {  // if a value is less than 70...
                                           printf("Grade must be greater than 70.\n\n");  // ...tell the user they suck...
                                           evaluate(); // ...and restart the function
                                           }
                                           
                                           else if (value > 100) {  // if a value is greater than 100...
                                                printf("Grade must be less than 100.\n\n");  // ...tell the user they suck...
                                                evaluate();  // ...and restart the function
                                                }
                
        scanf("%d", &value);  // enter next value
        
        }
        
        if (value >= 70 && value <= 79) {  // if a value is between 70 and 79...
                  grade[index] = value;  // ...assign it to grade[index]...
                  sum = sum + value;  // ...add it to the current value of sum...
                  value_c++;  // ...and add 1 to the count of C grades
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

