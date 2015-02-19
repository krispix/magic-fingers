//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 2/5/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // main function.
{
    float bottle; // number of ounces in the bottle.
    float percent;  // percent of bottle filled.
    bottle = 0;  // set initial value at 0 (empty).
   
    while (bottle < 20)  // while loop with control statement of bottle < 20.
    {
          percent = (bottle/20) * 100;  // arithmetic to get percentage of bottle filled.
          printf("We have filled %.0f%% of the bottle.\n",percent);  // prints the percentage of bottle filled.
          bottle = bottle +1;  // increments bottle by 1, or adds one ounce of liquid.  returns to while loop.
          }
  printf("\nYour bottle is 100%% full.  Hooray!\n\n");
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
