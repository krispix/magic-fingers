//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 3/26/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void printstars(int num); // prototyping printstars for main

int main(void) // main function
{
  int num; // declare num as integer
  printf("Please enter an integer number: "); // prompts user
  scanf("%d", &num); // user input assigned to num
  printstars(num); // run printstars with num
  system("PAUSE");	// "Press any key to continue . . ."
  return 0; // return type of 0 (int)
}

void printstars(int num) { // printstars function
  int count; // declare count as integer    
  for(count = 0; count < num;count++) { // for loop; run while count is less than num
    putchar('*'); // prints asterisk(s) amount of times equal to num
  }
  printf("\n"); // adds new line
  if (num > 1) { // we want to stop at 1
     printstars(num-1); // recursion; calls itself with num-1
  }
}
