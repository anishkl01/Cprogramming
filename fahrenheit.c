//farenheit to celcius 

#include <stdio.h>

float celsius, fahrenheit;

void main() {
  printf("Enter temperature in Fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit-32)*5/9;
  printf("celsius = %.3f", celsius);
