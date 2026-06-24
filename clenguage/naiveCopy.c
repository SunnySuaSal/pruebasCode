#include <stdio.h>

/* Copy input to output
   second version */

int main(){
  int c;
  printf("%d\n", EOF);
  printf("%d\n", getchar() != EOF);
  while ((c = getchar()) != EOF)
    putchar(c);
  return 0;
}
