//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 1/29/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])  // main function.
{
  float rad;  // declare variable for radius as a float.
  float circ;  // declare variable for circumference as a float.
  float pi = M_PI;  // declare variable for pi as a float and import value from library.
  
  printf("Enter the radius of a circle: ");  // prompt user for input of radius.
  scanf("%f", &rad);  // the input for the radius.
  circ = 2 * pi * rad;  // calculation assigned to variable circ.
  printf("The circumference of your circle is %.2f.\n\n", circ);  // displaying the calculation to the user.
    
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
