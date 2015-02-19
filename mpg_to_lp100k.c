//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 2/11/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#define LITERS_PER_GALLON 3.785  // constant defining liters per gallon
#define KILOMETERS_PER_MILE 1.609  // constant defining kilometers per mile

int main(int argc, char *argv[])  // main function
{
  float miles;  // variable for miles
  float kilometers;  // variable for kilometers
  float gallons;  // variable for gallons
  float liters;  // variable for liters
  float mpg;  // variable for miles-per-gallon
  float lp100k;  // variable for liters-per-100-kilometers
  
  printf("How many miles did you travel?  ");  // prompts user to enter miles traveled
  scanf("%f", &miles);  // input assigning value to variable "miles"
  printf("How many gallons of gasoline did you use?  ");  // prompts user to enter gallons of gasoline used
  scanf("%f", &gallons);  // input assigning value to variable "gallons"
  kilometers = KILOMETERS_PER_MILE * miles;  // calculates kilometers (1.609 * miles)
  liters = LITERS_PER_GALLON * gallons;  // calculates liters (3.785 * gallons)
  mpg = miles / gallons;  // calculates miles-per-gallon (miles / gallon)
  lp100k = (liters / kilometers) * 100;  // calculates liters-per-100-km (liters / kilometers * 100)
  printf("\n\nYour fuel efficiency for your trip:\n\n");  // message displayed to user
  printf("American:  %.1f miles-per-gallon\n", mpg);  // displays american fuel efficiency
  printf("European:  %.1f liters-per-100-km\n\n", lp100k);  // displays european fuel efficiency
  
  
  
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
