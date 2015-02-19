//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 2/11/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  // main function
{
    int number;  // control variable
    number = 0;  // control variable initially assigned as 0
    
    while (number < 11){  // repeat while the value of number is less than 11
          if (number%2 == 0){  // of the modulus is zero, print following statement
               printf("%d is even.\n\n", number);  // statement to print if if-statement true
               } // closes if statement
          else printf("%d is odd.\n\n", number);  // statement to print if if-statement is false
               number++;  // increment value of number by 1; returns to beginning of while loop
               }
    
  
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
