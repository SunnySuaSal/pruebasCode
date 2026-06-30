#include <stdio.h>

#define LOWER 0 //lower value
#define UPPER 300 //upper value
#define STEP 20

float fahToCelConversion(int fah);

int main(){
  for(int fah = LOWER; fah <= UPPER; fah+=STEP){
    printf("%3d %6.1f\n", fah, fahToCelConversion(fah));
  }
  return 0;
}

float fahToCelConversion(int fah){
  return (5.0/9.0)*(fah - 32);
}
