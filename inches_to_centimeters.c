//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 1/27/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // main function.
{
  float cent;  // centimeters:  saved as a floating decimal because answer is likely not integer.
  float inch;  // inches:  saved as a floating decimal in case user inputs a real number.
  
  printf("Enter number of inches: ");  // text asking user for input.
  scanf("%f", &inch);  // the actual input; assigned to variable 'inch'.
  cent = inch * 2.54;  // cent is assigned the value of inches multiplied by 2.54.
  printf("%.2f inches is %.2f centimeters.\n\n", inch,cent);  // displays results to 2 decimal places.
  
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
