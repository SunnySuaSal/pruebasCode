#include <stdio.h>

/* Print Celsius to Fahrenheit table
   for celsius = 0, 20, ..., 300
   floating-point version */

int main(){
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("Celsius to Fahrenheit convertion table\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}
