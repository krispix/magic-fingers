//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 2/17/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  // main function
{
    int number;  // control variable, type declaration 
    int odd_sum;  // sum of odd numbers, type declaration
    int even_sum;  // sum of even numbers, type declaration
    number = 0;  // control variable starts at 0
    odd_sum = 0;  // sum of odd numbers starts at 0
    even_sum = 0;  // sum of even numbers starts at 0
 
    while (number < 100)  // repeat while control variable is less than 100; if this is to be inclusive of 100, number < 101
    {
          if (number%2 == 0)  // if modulus is zero, it's evenly divisible...
          {
                       even_sum=even_sum + number;  // ...and gets added to even_sum
                       number++;  // increment control variable by 1
                       }
          else // otherwise the number is not evenly divisible and is thusly odd...
          {
               odd_sum = odd_sum + number;  // ...and gets added to odd_sum
               number++;  // increment control variable by 1
               }
          }

  printf("Sum of even numbers:  %d\n\n", even_sum);  // prints the sum of even numbers
  printf("Sum of odd numbers:  %d\n\n", odd_sum);  // prints the sum of odd numbers

  
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
