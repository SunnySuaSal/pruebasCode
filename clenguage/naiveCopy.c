#include <stdio.h>

/* Copy input to output
   second version */

int main(){
  int c;
  printf("%d\n", EOF);
  while ((c = getchar()) != EOF)
    putchar(c);
  return 0;
}
