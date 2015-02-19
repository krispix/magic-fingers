// Kristin Krause
// 01/22/2015

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])  // main function
{
  float tempf;  // declaring variable tempf as a float; temperature in Fahrenheit
  float tempc;  // declaring variable tempc as a float; temperature in Celsius
  
  printf("What is the temperature in Fahrenheit?  ");  // prints instructions to user
  scanf("%f", &tempf);  // input from the user
  tempc = (tempf-32)*5/9;  // math to convert F° to C°
  printf("The temperature in Celsius is %.2f.\n\n", tempc);  // prints final result
    
  system("PAUSE");	// "Press any key to continue..."
  return 0;
}
