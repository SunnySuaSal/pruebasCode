#include <stdio.h>
/* Counts lines in input
 * and also blanks and tabs*/
int main(){
  int c, nl, nb, nt;
  nl = nb = nt = 0;

  while ((c = getchar()) != EOF){
    if(c == '\n')
      ++nl;
    else if(c == '\b')
      ++nb;
    else if(c == '\t')
      ++nt;
    else
      continue;
  }

  printf("lines: %d, blanks: %d, tabs: %d\n", nl, nb, nt);
  return 0;
}
