#include <stdio.h>

/* Cont digits, white space, others */

int main(){
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for(i = 0; i<10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if(c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if(c == ' '||c == '\n'||c == '\t')
      ++nwhite;
    else
      ++nother;
  }
  //we mess here with the print
  //to make the histogram
  printf("Histogram\n");
  for (i = 0; i<10; ++i){
    printf("%d= ", i);
    printf("%d ", ndigit[i]);
    for(int j = 0; j<ndigit[i]; ++j)
      putchar('#');
    putchar('\n');
  }
  putchar('w');
  for(i = 0; i<nwhite; ++i)
    putchar('#');
  printf("\no");
  for(i = 0; i<nother; ++i)
    putchar('#');
  putchar('\n');
  return 0;
}
