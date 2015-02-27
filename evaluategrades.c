#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
    int grade[SIZE];
    int value;
    int index;
    int avg;
    int sum = 0;
    int value_a = 0;
    int value_b = 0;
    int value_c = 0;
    
    printf("Enter five, integer grades.\n\n");
    scanf("%d", &value);
    
    for (index = 0; index < SIZE-1 && value >= 70 && value <= 100; index++)
    {
        grade[index] = value;
        sum = sum + value;
        if (value >= 70 && value < 80)
        {
                  value_c = value_c++;  // count C grades
                  }
                  else if (value >= 80 && value < 90)
                  {
                       value_b = value_b++;  // count B grades
                       }
                       else if (value >= 90 && value <= 100)
                       {
                            value_a = value_a++;  // count A grades
                            }
                
        scanf("%d", &value);
        }
        
        avg = sum / (SIZE-1);  // average grade
        printf("\nThe average grade is:  %d\n\n", avg);
        printf("The number of A's is %d\n\n", value_a);
        printf("The number of B's is %d\n\n", value_b);
        printf("The number of C's is %d\n\n", value_c);
  
  system("PAUSE");	
  return 0;
}
