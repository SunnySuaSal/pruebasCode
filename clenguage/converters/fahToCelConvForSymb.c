#include <stdio.h>

#define LOWER 0 //lower value
#define UPPER 300 //upper value
#define STEP 20

int main(){
  for(int fah = LOWER; fah <= UPPER; fah+=STEP){
    printf("%3d %6.1f\n", fah, (5.0/9.0)*(fah - 32));
  }
  return 0;
}
