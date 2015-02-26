//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 2/24/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  // main function
{
    int sec;  // declare type int for sec
    int setting;  // declare type int for setting
    _Bool start;  // declares start to be a boolean
    start = 1;  // gives start a value of 1 to begin with, making it true
    
    while (start == 1) // while start is 1 do the following
    {
    
    printf("What are you cooking in your microwave today?\n\n"); // prompts user
    printf("Your choices are: \n1 (for boiling water)\n2 (for defrosting meat)\n3 (for popping popcorn)\n\n"); // shows choices 1-3
    scanf("%d", &setting); // input from user
    
          if (setting == 1) // if user enters 1...
          {
                      sec = 45;  // 45 seconds
                }
                else 
                if (setting == 2) // if user enters 2...
                {
                     sec = 58; // 58 seconds
                     }
                     else 
                     if (setting == 3) // if user enters 3...
                     {
                          sec = 32; // 32 seconds
                          }

                          
    for (sec; sec > 0; sec--) // for loop starts at sec's value, repeats while greater than 0, subtracts one each iteration
    {
        printf("\n");
        printf("%d seconds\n", sec); // prints remaining seconds
        }
        
        printf("\n\nBon appetit!\n");  // do it
        
        printf("Do you want to cook something else?\n\n");
        printf("Press 1 to cook something else or press q to quit\n\n");
        start = (scanf("%d", &setting) == 1);  // checks to see if setting is an int and assigns 1 to start if true
}
  printf("\n\n");
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
