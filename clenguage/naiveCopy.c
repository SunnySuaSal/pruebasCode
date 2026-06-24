#include <stdio.h>

/* Copy input to output
   second version */

int main(){
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
  return 0;
}
