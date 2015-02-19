//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 1/19/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // main function.
{
  float cups;   // variable for cups.
  float pints;  // variable for pints.
  float ounces; // variable for ounces.
  float tbsps;  // variable for tablespoons.
  float tsps;   // variable for teaspoons.
   
  printf("Enter number of cups: ");  // text asking user  for input.
  scanf("%f", &cups); // the actual input; assigned to variable 'cups'.
  pints = cups / 2;  // pints is assigned the value of cups divided by 2.
  printf("%.2f cups is %.2f pints.\n", cups, pints);  // displays cups and pints.
  ounces = cups * 8;  // ounces is assigned the value of cups multiplied by 8.
  printf("%.2f cups is %.2f ounces.\n", cups, ounces);  // displays cups and ounces.
  tbsps = ounces * 2;  // tbsps is assigned the value of ounces multipled by 2.
  printf("%.2f cups is %.2f tablespoons.\n", cups, tbsps);  // displays cups and tablespoons.
  tsps = tbsps * 3;  // tsps is assigned the value of tbsps multiplied by 3.
  printf("%.2f cups is %.2f teaspoons.\n\n", cups, tsps);  // displays cups and teaspoons.
  
  system("PAUSE");	// "Press any key to continue..."
  
  //  A floating type makes more sense over an integer because the conversion will likely be
  //  a real number and not an integer.  If, say, in cooking you use 2 cups instead of 2.5,
  //  you may wreck whatever it is you're cooking.
  
  return 0;
}
