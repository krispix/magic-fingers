//
//  main.c
//  Intro to C
//
//  Created by Kristin Krause on 2/3/15.
//  Copyright (c) 2015 Kristin Krause. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // main function.
{
  char first[20]; // variable array for first name.
  char last[20];  // variable array for last name.
  int l_first, l_last; // int variables representing length of first and last name.
  
  printf("What's your first name?\n");  // text asking for first name.
  scanf("%s", first);  // input for first name.
  printf("What's your last name?\n");  // text asking for last name.
  scanf("%s", last);  // input for last name.
  l_first = strlen(first);  // number of letters in first name.
  l_last = strlen(last);  // number of letters in last name.
  printf("\n\n%s %s\n", first, last);  // prints first and last name.
  printf("%*d %*d", l_first, l_first, l_last, l_last);  // moves l_first number of spaces, prints l_first's value, moves l_last number of spaces, prints l_last's value.
  printf("\n\n%s %s\n", first, last);  // prints first and last name.
  printf("%d %*d\n\n", l_first, l_first, l_last);  // prints l_first's value, moves l_first number of spaces, prints l_last's value.

  
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
